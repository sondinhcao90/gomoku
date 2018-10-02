#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    setupUI();
    connect(m_pWelcomeScreen, SIGNAL(BtnClicked(eWelcomeButton)), this, SLOT(handleWelcomeEvent(eWelcomeButton)));
    connect(m_pLoginScreen, SIGNAL(BtnClicked(eLoginButton)), this, SLOT(handleLoginEvent(eLoginButton)));
}

void MainWindow::handleLoginEvent(eLoginButton Btn)
{
    switch (Btn) {
    case BtnBack:
        m_CurrentScreen = SC_Welcome;
        m_pLoginScreen->hide();
        m_pWelcomeScreen->show();
        break;
    default:
        break;
    }
}

void MainWindow::handleWelcomeEvent(eWelcomeButton Btn)
{
    switch (Btn) {
    case BtnSinglePlayer:
        m_CurrentScreen = SC_Login;
        m_pLoginScreen->show();
        m_pWelcomeScreen->hide();
    default:
        break;
    }
}

void MainWindow::setupUI()
{
    this->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
    m_pWelcomeScreen = new Welcome(this);
    m_pLoginScreen = new Login(this);
    m_pWelcomeScreen->show();
    m_pLoginScreen->hide();
}

void MainWindow::updateUI()
{

}
