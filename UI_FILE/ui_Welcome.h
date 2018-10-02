/********************************************************************************
** Form generated from reading UI file 'Welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pBtSinglePlayer;
    QSpacerItem *verticalSpacer;
    QPushButton *pBtTwoPlayer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pBtPlayOnline;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pBtReplayMode;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->resize(800, 600);
        Welcome->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        widget = new QWidget(Welcome);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 801, 624));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        pBtSinglePlayer = new QPushButton(widget);
        pBtSinglePlayer->setObjectName(QStringLiteral("pBtSinglePlayer"));
        QFont font;
        font.setPointSize(20);
        pBtSinglePlayer->setFont(font);
        pBtSinglePlayer->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));

        verticalLayout->addWidget(pBtSinglePlayer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        pBtTwoPlayer = new QPushButton(widget);
        pBtTwoPlayer->setObjectName(QStringLiteral("pBtTwoPlayer"));
        pBtTwoPlayer->setFont(font);
        pBtTwoPlayer->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));

        verticalLayout->addWidget(pBtTwoPlayer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        pBtPlayOnline = new QPushButton(widget);
        pBtPlayOnline->setObjectName(QStringLiteral("pBtPlayOnline"));
        pBtPlayOnline->setFont(font);
        pBtPlayOnline->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));

        verticalLayout->addWidget(pBtPlayOnline);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        pBtReplayMode = new QPushButton(widget);
        pBtReplayMode->setObjectName(QStringLiteral("pBtReplayMode"));
        pBtReplayMode->setFont(font);
        pBtReplayMode->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));

        verticalLayout->addWidget(pBtReplayMode);

        verticalSpacer_5 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "GOMOKU", Q_NULLPTR));
        pBtSinglePlayer->setText(QApplication::translate("Welcome", "Single Player", Q_NULLPTR));
        pBtTwoPlayer->setText(QApplication::translate("Welcome", "Two Players", Q_NULLPTR));
        pBtPlayOnline->setText(QApplication::translate("Welcome", "Play Online", Q_NULLPTR));
        pBtReplayMode->setText(QApplication::translate("Welcome", "Replay Mode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
