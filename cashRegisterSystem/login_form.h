#ifndef LOGIN_FORM_H
#define LOGIN_FORM_H
#pragma once
#include <QWidget>
#include <QMessageBox>
#include "ui_login_form.h"

class login_form : public QWidget
{
	Q_OBJECT
public:
	login_form(QWidget* parent = nullptr);
	~login_form();

private:
	Ui::Form* m_ui;

private slots:
	void on_login_btn_clicked();

};
#endif // LOGIN_FORM_H
