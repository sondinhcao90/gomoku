#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>

namespace Ui {
class Signin;
}

class Signin : public QWidget
{
    Q_OBJECT

public:
    explicit Signin(QWidget *parent = nullptr);
    ~Signin();

private:
    Ui::Signin *ui;
};

#endif // SIGNIN_H
