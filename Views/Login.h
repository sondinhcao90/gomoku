#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class Login;
}

typedef enum{
    BtnLogin = 0,
    BtnSignin,
    BtnBack
}eLoginButton;

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void hide();
signals:
    eLoginButton BtnClicked(eLoginButton btn);

private slots:
    void on_pBtBack_clicked();

    void on_pBtLogin_clicked();

    void on_pBtSignin_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
