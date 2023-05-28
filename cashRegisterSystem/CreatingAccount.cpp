#include "cashRegisterSystem.h"

void cashRegisterSystem::on_add_new_clicked()
{
    Database db("mydatabase.db");
    QString newName = m_ui->new_customer_name->text();
    string newName1 = newName.toStdString();
    QString newPhone = m_ui->new_customer_phone->text();
    string newPhone1 = newPhone.toStdString();
    int newClassIndex = m_ui->class_box->currentIndex();
    string newClass = "\u0639\u0645\u064A\u0644 \u0639\u0627\u062F\u064A"; // Úãíá ÚÇÏí

    if (newClassIndex == 1) {
        newClass = "\u0639\u0645\u064A\u0644 \u0645\u0647\u0645"; // Úãíá ãåã
    }
    else if (newClassIndex == 2) {
        newClass = "\u0637\u0627\u0644\u0628"; // ØÇáÈ
    }
    if (newName.isEmpty() || newPhone.isEmpty()) {
        QMessageBox::information(this, "\u0627\u0644\u062D\u0627\u0644\u0629 ", "\u0639\u0645\u0644\u064A\u0629 \u062E\u0627\u0637\u0626\u0629 ");// ÇáÍÇáÉ ÚãáíÉ ÎÇØÆÉ
    }
    else {
        db.insertCustomerRows(newName1, newPhone1, 0, newClass);
        QMessageBox::information(this, "\u0627\u0644\u062D\u0627\u0644\u0629 ", "\u0639\u0645\u0644\u064A\u0629 \u0646\u0627\u062C\u062D\u0629 ");// ÇáÍÇáÉ ÚãáíÉ äÇÌÍÉ
        m_ui->new_customer_name->clear();
        m_ui->new_customer_phone->clear();
    }
    m_ui->class_box->setCurrentIndex(0);
}

void cashRegisterSystem::on_go_back_clicked()
{
    if (isAdmin)
        m_ui->formsStackedWidget->setCurrentIndex(6);
    else
        m_ui->formsStackedWidget->setCurrentIndex(1);
}