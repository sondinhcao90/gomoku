#include "Signin.h"
#include "ui_Signin.h"

Signin::Signin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signin)
{
    ui->setupUi(this);
}

Signin::~Signin()
{
    delete ui;
}
