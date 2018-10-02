#include "Welcome.h"
#include "ui_Welcome.h"

Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::setupUI()
{

}

void Welcome::updateUI()
{

}

void Welcome::on_pBtSinglePlayer_clicked()
{
    emit BtnClicked(BtnSinglePlayer);
}

void Welcome::on_pBtTwoPlayer_clicked()
{
    emit BtnClicked(BtnTwoPlayer);
}

void Welcome::on_pBtPlayOnline_clicked()
{
    emit BtnClicked(BtnPlayOnline);
}

void Welcome::on_pBtReplayMode_clicked()
{
    emit BtnClicked(BtnReplayMode);
}
