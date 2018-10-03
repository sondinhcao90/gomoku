#ifndef TWOPLAYER_H
#define TWOPLAYER_H

#include <QWidget>

namespace Ui {
class TwoPlayer;
}

typedef enum{
    BtnLogin1,
    BtnLogin2,
    BtnSignin1,
    BtnSignin2,
    BtnBackTP
}eTwoPlayerButton;

class TwoPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit TwoPlayer(QWidget *parent = 0);
    ~TwoPlayer();
signals:
    eTwoPlayerButton BtnClicked(eTwoPlayerButton btn);
private slots:
    void on_pBtBack_clicked();

    void on_pBtLogin_clicked();

    void on_pBtSignin_clicked();

    void on_pBtLogin_2_clicked();

    void on_pBtSignin_2_clicked();

private:
    Ui::TwoPlayer *ui;
};

#endif // TWOPLAYER_H
