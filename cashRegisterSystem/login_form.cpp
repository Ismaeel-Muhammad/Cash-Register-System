#include "login_form.h"

login_form::login_form(QWidget* parent)
	: QWidget(parent), m_ui(new Ui::login_formClass)
{
	m_ui->setupUi(this);
}

login_form::~login_form()
{
	delete m_ui;
}
void login_form::on_login_btn_clicked()
{
	QString name = m_ui->name->toPlainText();
	QString password = m_ui->Password->toPlainText();
	if (name == "admin" && password == "admin") {
		QMessageBox::information(this, "Login", "Welcome Admin!");
	}
}