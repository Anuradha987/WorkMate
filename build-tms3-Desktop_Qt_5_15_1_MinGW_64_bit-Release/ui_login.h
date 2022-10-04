/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *txtPassword;
    QLineEdit *txtUsername;
    QPushButton *btnLogin;
    QLabel *lblUsername;
    QPushButton *btnCancel;
    QFrame *line;
    QLabel *lblPassword;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->setWindowModality(Qt::NonModal);
        login->setEnabled(true);
        login->resize(1135, 760);
        login->setMaximumSize(QSize(1135, 760));
        login->setContextMenuPolicy(Qt::DefaultContextMenu);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(305, 270, 521, 391));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox\n"
"{border-radius: 10px;\n"
"border: 2px solid #fff;\n"
"background-color:#7F000000;\n"
"}"));
        txtPassword = new QLineEdit(groupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(180, 195, 261, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(12);
        txtPassword->setFont(font);
        txtPassword->setFocusPolicy(Qt::ClickFocus);
        txtPassword->setStyleSheet(QString::fromUtf8("background-color: #1E231D;\n"
"border: transparent;\n"
"color: #fff;\n"
"border-radius:5px;\n"
"padding-left:7px;"));
        txtPassword->setEchoMode(QLineEdit::Password);
        txtUsername = new QLineEdit(groupBox);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(180, 115, 261, 35));
        txtUsername->setFont(font);
        txtUsername->setStyleSheet(QString::fromUtf8("background-color: #1E231D;\n"
"border: transparent;\n"
"color: #fff;\n"
"border-radius:5px;\n"
"padding-left:7px;"));
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(290, 310, 141, 45));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btnLogin->setFont(font1);
        btnLogin->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: qlineargradient(spread:pad, x1:0.0144231, y1:0.057, x2:0.995, y2:1, stop:0 rgba(230, 16, 86, 255), stop:1 rgba(244, 84, 255, 255));\n"
"color: #fff;"));
        lblUsername = new QLabel(groupBox);
        lblUsername->setObjectName(QString::fromUtf8("lblUsername"));
        lblUsername->setGeometry(QRect(60, 120, 101, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        lblUsername->setFont(font2);
        lblUsername->setStyleSheet(QString::fromUtf8("color:#fff;background-color: transparent;"));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(80, 310, 141, 45));
        btnCancel->setFont(font1);
        btnCancel->setStyleSheet(QString::fromUtf8("#btnCancel{\n"
"border-radius:10px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
"}"));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 270, 441, 20));
        line->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lblPassword = new QLabel(groupBox);
        lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
        lblPassword->setGeometry(QRect(60, 200, 91, 21));
        lblPassword->setFont(font2);
        lblPassword->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"background-color: transparent;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 30, 121, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color:#fff;background-color: transparent;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1135, 760));
        label->setStyleSheet(QString::fromUtf8("background-color: #000"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 170, 561, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: #fff;background-color: transparent;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 70, 381, 91));
        QFont font5;
        font5.setFamily(QString::fromUtf8("HP Simplified"));
        font5.setPointSize(48);
        font5.setBold(true);
        font5.setWeight(75);
        label_3->setFont(font5);
        label_3->setFocusPolicy(Qt::NoFocus);
        label_3->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"background-color: transparent;"));
        login->setCentralWidget(centralwidget);
        label->raise();
        groupBox->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        groupBox->setTitle(QString());
        btnLogin->setText(QCoreApplication::translate("login", "Sign in", nullptr));
        lblUsername->setText(QCoreApplication::translate("login", "Username :", nullptr));
        btnCancel->setText(QCoreApplication::translate("login", "Cancel", nullptr));
        lblPassword->setText(QCoreApplication::translate("login", "Password :", nullptr));
        label_4->setText(QCoreApplication::translate("login", "SIGN IN", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "Create, View, Share and Collaborate your projects with WorkMate.", nullptr));
        label_3->setText(QCoreApplication::translate("login", "WorkMate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
