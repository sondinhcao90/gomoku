INCLUDEPATH += Views
DEPENDPATH  += Views
VPATH       += Views

FORMS += \
    $$PWD/Login.ui \
    $$PWD/Welcome.ui \
    $$PWD/TwoPlayer.ui

HEADERS += \
    $$PWD/Login.h \
    $$PWD/Welcome.h \
    $$PWD/MainWindow.h \
    $$PWD/TwoPlayer.h

SOURCES += \
    $$PWD/Login.cpp \
    $$PWD/Welcome.cpp \
    $$PWD/MainWindow.cpp \
    $$PWD/TwoPlayer.cpp
