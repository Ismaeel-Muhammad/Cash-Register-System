#include "cashRegisterSystem.h"

float cashRegisterSystem::on_user_check_discount_clicked(float price) {
    return check_discount(m_ui->user_price_after, m_ui->user_price_before, m_ui->user_check_discount, m_ui->user_phone_number, price);
}

void cashRegisterSystem::on_user_cancel_order_clicked()
{
    DeleteAll(m_ui->user_price_before, m_ui->user_price_after, m_ui->user_check_discount, m_ui->user_phone_number, m_ui->user_cart_contents);
}

void cashRegisterSystem::confirmPayOperation(char operationType) {
    const QString phoneNumber = m_ui->user_phone_number->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        payOperation(operationType, m_ui->user_price_before, m_ui->user_price_after, m_ui->user_check_discount, m_ui->user_phone_number, m_ui->user_cart_contents);
    }
    else {
        // No match found in the database
        QMessageBox msgBox;
        msgBox.setText("No customer found with this phone number.");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Close);
        int ret = msgBox.exec();
        if (ret == QMessageBox::Ok) {
            m_ui->formsStackedWidget->setCurrentIndex(3);
            m_ui->new_customer_phone->setText(phoneNumber);
        }
    }
}

void cashRegisterSystem::on_user_retrieve_clicked()
{
    confirmPayOperation('-');
}

void cashRegisterSystem::on_user_sell_clicked()
{
    printReceipt();

    confirmPayOperation('+');
}

void cashRegisterSystem::printReceipt() {
    m_ui->receipt->clear();
    QPrinter printer(QPrinter::HighResolution);
    printer.setPrinterName("My Printer");

    QPageSize pageSize(QPageSize::A4);
    QPageLayout pageLayout(pageSize, QPageLayout::Portrait, QMarginsF(0, 0, 0, 0)); // create a page layout
    printer.setPageLayout(pageLayout); // set the page layout for the printer
    float Discount = abs((1-(m_ui->user_price_after->text().toFloat() / m_ui->user_price_before->text().toFloat()))*100);
    QDateTime currentDateTime = QDateTime::currentDateTime();

    QPrintDialog dialog(&printer, this);
    if (dialog.exec() == QDialog::Accepted) {

        QString header =
            "<body style = 'text-align: center'; >"
            "<h1> Ali Baba!< / h1>"
            "<h3>+20 10 9226 2446 < / h3 >"
            "<h3>3 Taha Hussein El yamama Zamalek Center</h3>"
            "_________________________________________________";
            
        QString body = "";
        
        QHash<QString, QList<QVariant>>::iterator it;
        for (it = myHash.begin(); it != myHash.end(); ++it) {
            QString key = it.key();
            QList<QVariant> value = it.value();
            body += "<h3> x" + value.at(0).toString() +"  " + key + "              " + value.at(1).toString() + "EGP</h3>";
        }
        
        QString tail ="_________________________________________________"
            "<h3>Total Before:          " + m_ui->user_price_before->text() + "EGP </h3>"
            "<h3>Discount: " + QString::number(Discount) + " % </h3>"
            "<h3>Total After:          " + m_ui->user_price_after->text() + "EGP </h3>"
            "<h3> " + currentDateTime.date().toString() + " " + currentDateTime.time().toString() + " </h3>"
            "<h3></h3>"
            "</body>";

        m_ui->receipt->insertHtml(header + body + tail);

        m_ui->receipt->setAlignment(Qt::AlignCenter);
        m_ui->receipt->print(&printer);
    }
}
