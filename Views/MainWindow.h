#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <Globals/types.h>
#include <Globals/macros.h>
#include <Views/Login.h>
#include <Views/Welcome.h>
#include <QTimer>

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();
signals:

private slots:
    void handleLoginEvent(eLoginButton Btn);
    void handleWelcomeEvent(eWelcomeButton Btn);
    void updateUI();

private:
    void setupUI();
    eScreen     m_CurrentScreen;
    ePlayMode   m_CurrentPlayMode;
    Login       *m_pLoginScreen;
    Welcome     *m_pWelcomeScreen;
};

#endif // MAINWINDOW_H
