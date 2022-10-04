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
        AssignUser->resize(527, 450);
        groupBox = new QGroupBox(AssignUser);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 501, 333));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 80, 55, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lblProject = new QLabel(groupBox);
        lblProject->setObjectName(QString::fromUtf8("lblProject"));
        lblProject->setGeometry(QRect(170, 80, 151, 16));
        lblProject->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 281, 16));
        cbStaff = new QComboBox(groupBox);
        cbStaff->setObjectName(QString::fromUtf8("cbStaff"));
        cbStaff->setGeometry(QRect(60, 210, 301, 24));
        lblProjectName = new QLabel(groupBox);
        lblProjectName->setObjectName(QString::fromUtf8("lblProjectName"));
        lblProjectName->setGeometry(QRect(310, 80, 151, 16));
        lblProjectName->setFont(font);
        btnAssign = new QPushButton(AssignUser);
        btnAssign->setObjectName(QString::fromUtf8("btnAssign"));
        btnAssign->setGeometry(QRect(290, 370, 141, 31));

        retranslateUi(AssignUser);

        QMetaObject::connectSlotsByName(AssignUser);
    } // setupUi

    void retranslateUi(QDialog *AssignUser)
    {
        AssignUser->setWindowTitle(QCoreApplication::translate("AssignUser", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("AssignUser", "Project", nullptr));
        lblProject->setText(QCoreApplication::translate("AssignUser", "Project Code ", nullptr));
        label_3->setText(QCoreApplication::translate("AssignUser", "Select the employee to assign it to the project", nullptr));
        lblProjectName->setText(QCoreApplication::translate("AssignUser", "Project name", nullptr));
        btnAssign->setText(QCoreApplication::translate("AssignUser", "Assign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignUser: public Ui_AssignUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNUSER_H
