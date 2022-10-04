QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assignuser.cpp \
    ceohomescreen.cpp \
    databaseconnection.cpp \
    employeehomescreen.cpp \
    main.cpp \
    login.cpp \
    managerhomescreen.cpp \
    myinfo.cpp \
    projects.cpp \
    user.cpp

HEADERS += \
    assignuser.h \
    ceohomescreen.h \
    databaseconnection.h \
    employeehomescreen.h \
    login.h \
    managerhomescreen.h \
    myinfo.h \
    projects.h \
    user.h

FORMS += \
    assignuser.ui \
    ceohomescreen.ui \
    employeehomescreen.ui \
    login.ui \
    managerhomescreen.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
