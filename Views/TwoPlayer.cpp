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
