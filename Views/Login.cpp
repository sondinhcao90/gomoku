#include "Login.h"
#include "ui_Login.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pBtBack_clicked()
{
    emit BtnClicked(BtnBack);
}

void Login::on_pBtLogin_clicked()
{
    emit BtnClicked(BtnLogin);
}

void Login::on_pBtSignin_clicked()
{
    emit BtnClicked(BtnSignin);
}

void Login::hide()
{
    ui->txtID->clear();
    ui->txtPassword->clear();
    QWidget::hide();
}
