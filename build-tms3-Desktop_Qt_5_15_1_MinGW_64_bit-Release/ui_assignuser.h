/********************************************************************************
** Form generated from reading UI file 'assignuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNUSER_H
#define UI_ASSIGNUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AssignUser
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *lblProject;
    QLabel *label_3;
    QComboBox *cbStaff;
    QLabel *lblProjectName;
    QPushButton *btnAssign;

    void setupUi(QDialog *AssignUser)
    {
        if (AssignUser->objectName().isEmpty())
            AssignUser->setObjectName(QString::fromUtf8("AssignUser"));
        AssignUser->resize(481, 450);
        AssignUser->setStyleSheet(QString::fromUtf8("background-color: #1B2131;"));
        groupBox = new QGroupBox(AssignUser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 471, 351));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color: #1B2131;\n"
"border:#1B2131;\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(35, 75, 71, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        lblProject = new QLabel(groupBox);
        lblProject->setObjectName(QString::fromUtf8("lblProject"));
        lblProject->setGeometry(QRect(110, 75, 131, 21));
        lblProject->setFont(font);
        lblProject->setStyleSheet(QString::fromUtf8("color:#fff;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 341, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(9);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        cbStaff = new QComboBox(groupBox);
        cbStaff->setObjectName(QString::fromUtf8("cbStaff"));
        cbStaff->setGeometry(QRect(60, 210, 301, 35));
        cbStaff->setFont(font1);
        cbStaff->setStyleSheet(QString::fromUtf8("#cbStaff{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        lblProjectName = new QLabel(groupBox);
        lblProjectName->setObjectName(QString::fromUtf8("lblProjectName"));
        lblProjectName->setGeometry(QRect(260, 75, 281, 21));
        lblProjectName->setFont(font);
        lblProjectName->setStyleSheet(QString::fromUtf8("color:#fff;"));
        btnAssign = new QPushButton(AssignUser);
        btnAssign->setObjectName(QString::fromUtf8("btnAssign"));
        btnAssign->setGeometry(QRect(260, 360, 141, 41));
        btnAssign->setFont(font);
        btnAssign->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));

        retranslateUi(AssignUser);

        QMetaObject::connectSlotsByName(AssignUser);
    } // setupUi

    void retranslateUi(QDialog *AssignUser)
    {
        AssignUser->setWindowTitle(QCoreApplication::translate("AssignUser", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("AssignUser", "Project : ", nullptr));
        lblProject->setText(QCoreApplication::translate("AssignUser", "Project Code ", nullptr));
        label_3->setText(QCoreApplication::translate("AssignUser", "Select the employee to assign it to the project", nullptr));
        cbStaff->setPlaceholderText(QCoreApplication::translate("AssignUser", "Select the employee number", nullptr));
        lblProjectName->setText(QCoreApplication::translate("AssignUser", "Project name", nullptr));
        btnAssign->setText(QCoreApplication::translate("AssignUser", "Assign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignUser: public Ui_AssignUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNUSER_H
