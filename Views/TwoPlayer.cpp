#include "TwoPlayer.h"
#include "ui_TwoPlayer.h"

TwoPlayer::TwoPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TwoPlayer)
{
    ui->setupUi(this);
}

TwoPlayer::~TwoPlayer()
{
    delete ui;
}

void TwoPlayer::on_pBtBack_clicked()
{
    emit BtnClicked(BtnBackTP);
}

void TwoPlayer::on_pBtLogin_clicked()
{
    emit BtnClicked(BtnLogin1);
}

void TwoPlayer::on_pBtSignin_clicked()
{
    emit BtnClicked(BtnSignin1);
}

void TwoPlayer::on_pBtLogin_2_clicked()
{
    emit BtnClicked(BtnLogin2);
}

void TwoPlayer::on_pBtSignin_2_clicked()
{
    emit BtnClicked(BtnSignin2);
}
