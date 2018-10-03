#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    setupUI();
    connect(m_pWelcomeScreen, SIGNAL(BtnClicked(eWelcomeButton)), this, SLOT(handleWelcomeEvent(eWelcomeButton)));
    connect(m_pLoginScreen, SIGNAL(BtnClicked(eLoginButton)), this, SLOT(handleLoginEvent(eLoginButton)));
    connect(m_pTwoPlayerScreen, SIGNAL(BtnClicked(eTwoPlayerButton)), this, SLOT(handleTwoPlayerEvent(eTwoPlayerButton)));
}

MainWindow::~MainWindow()
{
    delete m_pLoginScreen;
    delete m_pWelcomeScreen;
    delete m_pTwoPlayerScreen;
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
        m_CurrentPlayMode = PM_Single;
        m_pLoginScreen->show();
        m_pWelcomeScreen->hide();
        break;
    case BtnTwoPlayer:
        m_CurrentScreen = SC_TwoPlayer;
        m_CurrentPlayMode = PM_TwoPlayer;
        m_pTwoPlayerScreen->show();
        m_pWelcomeScreen->hide();
        break;
    case BtnPlayOnline:
        m_CurrentScreen = SC_Login;
        m_CurrentPlayMode = PM_PlayOnline;
        m_pLoginScreen->show();
        m_pWelcomeScreen->hide();
        break;
    case BtnReplayMode:
        m_CurrentScreen = SC_Login;
        m_CurrentPlayMode = PM_Replay;
        m_pLoginScreen->show();
        m_pWelcomeScreen->hide();
        break;
    default:
        break;
    }
}

void MainWindow::handleTwoPlayerEvent(eTwoPlayerButton Btn)
{
    switch (Btn) {
    case BtnBackTP:
        m_CurrentScreen = SC_TwoPlayer;
        m_CurrentPlayMode = PM_TwoPlayer;
        m_pTwoPlayerScreen->hide();
        m_pWelcomeScreen->show();
        break;
    default:
        break;
    }
}

void MainWindow::setupUI()
{
    this->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));
    m_pWelcomeScreen = new Welcome(this);
    m_pLoginScreen = new Login(this);
    m_pTwoPlayerScreen = new TwoPlayer(this);
    m_pWelcomeScreen->show();
    m_pLoginScreen->hide();
    m_pTwoPlayerScreen->hide();
}

void MainWindow::updateUI()
{

}
