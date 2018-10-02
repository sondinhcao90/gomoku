/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *groupBox;
    QPushButton *pBtLogin;
    QPushButton *pBtSignin;
    QTextEdit *txtPassword;
    QTextEdit *txtID;
    QLabel *lPassword;
    QLabel *lID;
    QPushButton *pBtBack;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(800, 600);
        Login->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(202, 150, 400, 250));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(400, 250));
        groupBox->setStyleSheet(QStringLiteral(""));
        pBtLogin = new QPushButton(groupBox);
        pBtLogin->setObjectName(QStringLiteral("pBtLogin"));
        pBtLogin->setGeometry(QRect(60, 170, 89, 25));
        pBtSignin = new QPushButton(groupBox);
        pBtSignin->setObjectName(QStringLiteral("pBtSignin"));
        pBtSignin->setGeometry(QRect(250, 170, 89, 25));
        txtPassword = new QTextEdit(groupBox);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setGeometry(QRect(135, 90, 204, 31));
        txtID = new QTextEdit(groupBox);
        txtID->setObjectName(QStringLiteral("txtID"));
        txtID->setGeometry(QRect(135, 52, 204, 31));
        lPassword = new QLabel(groupBox);
        lPassword->setObjectName(QStringLiteral("lPassword"));
        lPassword->setGeometry(QRect(62, 100, 65, 17));
        lPassword->setStyleSheet(QStringLiteral("border: 0px solid"));
        lID = new QLabel(groupBox);
        lID->setObjectName(QStringLiteral("lID"));
        lID->setGeometry(QRect(62, 60, 16, 17));
        lID->setStyleSheet(QStringLiteral("border: 0px solid"));
        pBtLogin->raise();
        pBtSignin->raise();
        pBtBack = new QPushButton(Login);
        pBtBack->setObjectName(QStringLiteral("pBtBack"));
        pBtBack->setGeometry(QRect(50, 530, 89, 25));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Login", "\304\220\304\203ng Nh\341\272\255p V\303\240o H\341\273\207 Th\341\273\221ng", Q_NULLPTR));
        pBtLogin->setText(QApplication::translate("Login", "Log In", Q_NULLPTR));
        pBtSignin->setText(QApplication::translate("Login", "Sign In", Q_NULLPTR));
        lPassword->setText(QApplication::translate("Login", "Password", Q_NULLPTR));
        lID->setText(QApplication::translate("Login", "ID", Q_NULLPTR));
        pBtBack->setText(QApplication::translate("Login", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
