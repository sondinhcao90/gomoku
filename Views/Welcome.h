#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

namespace Ui {
class Welcome;
}

typedef enum{
    BtnSinglePlayer = 0,
    BtnTwoPlayer,
    BtnPlayOnline,
    BtnReplayMode
}eWelcomeButton;

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

signals:
    eWelcomeButton BtnClicked(eWelcomeButton btn);

private slots:
    void on_pBtSinglePlayer_clicked();

    void on_pBtTwoPlayer_clicked();

    void on_pBtPlayOnline_clicked();

    void on_pBtReplayMode_clicked();

private:
    void setupUI();
    void updateUI();
    Ui::Welcome *ui;
};

#endif // WELCOME_H
