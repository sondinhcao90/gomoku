/********************************************************************************
** Form generated from reading UI file 'TwoPlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOPLAYER_H
#define UI_TWOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwoPlayer
{
public:
    QTableView *tableBoard;
    QGroupBox *groupBox;
    QLabel *lID1;
    QPlainTextEdit *txtID1;
    QLabel *lPass1;
    QPlainTextEdit *txtPass1;
    QPushButton *pBtLogin;
    QPushButton *pBtSignin;
    QGroupBox *groupBox_2;
    QLabel *lPass2;
    QLabel *lID2;
    QPushButton *pBtLogin_2;
    QPlainTextEdit *txtID2;
    QPushButton *pBtSignin_2;
    QPlainTextEdit *txtPass2;
    QLabel *lVS;
    QPushButton *pBtBack;

    void setupUi(QWidget *TwoPlayer)
    {
        if (TwoPlayer->objectName().isEmpty())
            TwoPlayer->setObjectName(QStringLiteral("TwoPlayer"));
        TwoPlayer->resize(800, 600);
        tableBoard = new QTableView(TwoPlayer);
        tableBoard->setObjectName(QStringLiteral("tableBoard"));
        tableBoard->setGeometry(QRect(10, 10, 561, 561));
        groupBox = new QGroupBox(TwoPlayer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(579, 10, 211, 220));
        lID1 = new QLabel(groupBox);
        lID1->setObjectName(QStringLiteral("lID1"));
        lID1->setGeometry(QRect(10, 60, 31, 17));
        lID1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtID1 = new QPlainTextEdit(groupBox);
        txtID1->setObjectName(QStringLiteral("txtID1"));
        txtID1->setGeometry(QRect(50, 50, 150, 31));
        lPass1 = new QLabel(groupBox);
        lPass1->setObjectName(QStringLiteral("lPass1"));
        lPass1->setGeometry(QRect(10, 100, 31, 17));
        lPass1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtPass1 = new QPlainTextEdit(groupBox);
        txtPass1->setObjectName(QStringLiteral("txtPass1"));
        txtPass1->setGeometry(QRect(50, 90, 150, 31));
        pBtLogin = new QPushButton(groupBox);
        pBtLogin->setObjectName(QStringLiteral("pBtLogin"));
        pBtLogin->setGeometry(QRect(10, 160, 90, 25));
        pBtSignin = new QPushButton(groupBox);
        pBtSignin->setObjectName(QStringLiteral("pBtSignin"));
        pBtSignin->setGeometry(QRect(110, 160, 90, 25));
        groupBox_2 = new QGroupBox(TwoPlayer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(579, 370, 211, 220));
        lPass2 = new QLabel(groupBox_2);
        lPass2->setObjectName(QStringLiteral("lPass2"));
        lPass2->setGeometry(QRect(10, 100, 31, 17));
        lPass2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lID2 = new QLabel(groupBox_2);
        lID2->setObjectName(QStringLiteral("lID2"));
        lID2->setGeometry(QRect(10, 60, 31, 17));
        lID2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pBtLogin_2 = new QPushButton(groupBox_2);
        pBtLogin_2->setObjectName(QStringLiteral("pBtLogin_2"));
        pBtLogin_2->setGeometry(QRect(10, 160, 90, 25));
        txtID2 = new QPlainTextEdit(groupBox_2);
        txtID2->setObjectName(QStringLiteral("txtID2"));
        txtID2->setGeometry(QRect(50, 50, 150, 31));
        pBtSignin_2 = new QPushButton(groupBox_2);
        pBtSignin_2->setObjectName(QStringLiteral("pBtSignin_2"));
        pBtSignin_2->setGeometry(QRect(110, 160, 90, 25));
        txtPass2 = new QPlainTextEdit(groupBox_2);
        txtPass2->setObjectName(QStringLiteral("txtPass2"));
        txtPass2->setGeometry(QRect(50, 90, 150, 31));
        lVS = new QLabel(TwoPlayer);
        lVS->setObjectName(QStringLiteral("lVS"));
        lVS->setGeometry(QRect(580, 269, 211, 71));
        QFont font;
        font.setPointSize(40);
        lVS->setFont(font);
        lVS->setAlignment(Qt::AlignCenter);
        pBtBack = new QPushButton(TwoPlayer);
        pBtBack->setObjectName(QStringLiteral("pBtBack"));
        pBtBack->setGeometry(QRect(10, 573, 89, 25));

        retranslateUi(TwoPlayer);

        QMetaObject::connectSlotsByName(TwoPlayer);
    } // setupUi

    void retranslateUi(QWidget *TwoPlayer)
    {
        TwoPlayer->setWindowTitle(QApplication::translate("TwoPlayer", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TwoPlayer", "PLAYER1", Q_NULLPTR));
        lID1->setText(QApplication::translate("TwoPlayer", "ID", Q_NULLPTR));
        lPass1->setText(QApplication::translate("TwoPlayer", "Pass", Q_NULLPTR));
        pBtLogin->setText(QApplication::translate("TwoPlayer", "Log In", Q_NULLPTR));
        pBtSignin->setText(QApplication::translate("TwoPlayer", "Sign In", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TwoPlayer", "PLAYER2", Q_NULLPTR));
        lPass2->setText(QApplication::translate("TwoPlayer", "Pass", Q_NULLPTR));
        lID2->setText(QApplication::translate("TwoPlayer", "ID", Q_NULLPTR));
        pBtLogin_2->setText(QApplication::translate("TwoPlayer", "Log In", Q_NULLPTR));
        pBtSignin_2->setText(QApplication::translate("TwoPlayer", "Sign In", Q_NULLPTR));
        lVS->setText(QApplication::translate("TwoPlayer", "VS", Q_NULLPTR));
        pBtBack->setText(QApplication::translate("TwoPlayer", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TwoPlayer: public Ui_TwoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOPLAYER_H
