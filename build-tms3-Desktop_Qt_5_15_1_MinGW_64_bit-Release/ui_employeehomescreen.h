/********************************************************************************
** Form generated from reading UI file 'employeehomescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEHOMESCREEN_H
#define UI_EMPLOYEEHOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employeehomescreen
{
public:
    QGroupBox *tcEmployeeProject;
    QTabWidget *tabWidget;
    QWidget *tbAssigedProjects;
    QPushButton *btnStartProjcet;
    QTableView *dgAssignedProjects;
    QWidget *tbCurrentProject;
    QPushButton *btnCompleteProject;
    QTableView *dgCurrentProjects;
    QWidget *tbCompletedProjects;
    QTableView *dgCompletedProjects;
    QGroupBox *homeControlEmp;
    QLabel *label_8;
    QLabel *label_4;
    QFrame *frame_2;
    QLabel *label_14;
    QLabel *lblCompletedCount_3;
    QLabel *label_15;
    QFrame *frame_4;
    QLabel *lblNameHeader_3;
    QLabel *lblRoleHeader_3;
    QSplitter *splitter_3;
    QLabel *lblName_3;
    QLabel *lblGender_3;
    QLabel *lblAddress_3;
    QLabel *lblDepartment_3;
    QLabel *lblRole_3;
    QLabel *lblUsername_3;
    QFrame *line_3;
    QLabel *pUserAvatar;
    QFrame *frame;
    QLabel *label_7;
    QLabel *lblNotStartedCount_3;
    QFrame *frame_3;
    QLabel *label_13;
    QLabel *lblInProgressCount_3;
    QGroupBox *groupBox_3;
    QLabel *label_16;
    QPushButton *btnHome;
    QPushButton *btnViewProjects;
    QPushButton *btnLogout;

    void setupUi(QDialog *employeehomescreen)
    {
        if (employeehomescreen->objectName().isEmpty())
            employeehomescreen->setObjectName(QString::fromUtf8("employeehomescreen"));
        employeehomescreen->resize(1525, 944);
        employeehomescreen->setStyleSheet(QString::fromUtf8("background-color: #1B2131;"));
        tcEmployeeProject = new QGroupBox(employeehomescreen);
        tcEmployeeProject->setObjectName(QString::fromUtf8("tcEmployeeProject"));
        tcEmployeeProject->setGeometry(QRect(-1, 170, 1531, 751));
        tcEmployeeProject->setStyleSheet(QString::fromUtf8("#tcEmployeeProject{border: treansparent; \n"
"background-color: #1B2131;}"));
        tabWidget = new QTabWidget(tcEmployeeProject);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 20, 1421, 701));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);\n"
""));
        tbAssigedProjects = new QWidget();
        tbAssigedProjects->setObjectName(QString::fromUtf8("tbAssigedProjects"));
        btnStartProjcet = new QPushButton(tbAssigedProjects);
        btnStartProjcet->setObjectName(QString::fromUtf8("btnStartProjcet"));
        btnStartProjcet->setGeometry(QRect(1130, 590, 191, 41));
        btnStartProjcet->setFont(font);
        btnStartProjcet->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        dgAssignedProjects = new QTableView(tbAssigedProjects);
        dgAssignedProjects->setObjectName(QString::fromUtf8("dgAssignedProjects"));
        dgAssignedProjects->setGeometry(QRect(0, 0, 1421, 551));
        tabWidget->addTab(tbAssigedProjects, QString());
        tbCurrentProject = new QWidget();
        tbCurrentProject->setObjectName(QString::fromUtf8("tbCurrentProject"));
        btnCompleteProject = new QPushButton(tbCurrentProject);
        btnCompleteProject->setObjectName(QString::fromUtf8("btnCompleteProject"));
        btnCompleteProject->setGeometry(QRect(1130, 590, 191, 41));
        btnCompleteProject->setFont(font);
        btnCompleteProject->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        dgCurrentProjects = new QTableView(tbCurrentProject);
        dgCurrentProjects->setObjectName(QString::fromUtf8("dgCurrentProjects"));
        dgCurrentProjects->setGeometry(QRect(0, 0, 1421, 551));
        tabWidget->addTab(tbCurrentProject, QString());
        tbCompletedProjects = new QWidget();
        tbCompletedProjects->setObjectName(QString::fromUtf8("tbCompletedProjects"));
        dgCompletedProjects = new QTableView(tbCompletedProjects);
        dgCompletedProjects->setObjectName(QString::fromUtf8("dgCompletedProjects"));
        dgCompletedProjects->setGeometry(QRect(0, 0, 1421, 591));
        tabWidget->addTab(tbCompletedProjects, QString());
        homeControlEmp = new QGroupBox(employeehomescreen);
        homeControlEmp->setObjectName(QString::fromUtf8("homeControlEmp"));
        homeControlEmp->setGeometry(QRect(180, 220, 1211, 681));
        homeControlEmp->setStyleSheet(QString::fromUtf8("#homeControlEmp\n"
"{border: treansparent; \n"
"background-color: #1B2131;}"));
        label_8 = new QLabel(homeControlEmp);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(486, 10, 73, 67));
        label_8->setStyleSheet(QString::fromUtf8("border:transparentl"));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(homeControlEmp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(131, 10, 73, 67));
        label_4->setStyleSheet(QString::fromUtf8("border:transparentl"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(homeControlEmp);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(820, 37, 219, 68));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border: 2px solid #797979;\n"
"border-radius:10px;}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(120, 10, 81, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(9);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);\n"
""));
        lblCompletedCount_3 = new QLabel(frame_2);
        lblCompletedCount_3->setObjectName(QString::fromUtf8("lblCompletedCount_3"));
        lblCompletedCount_3->setGeometry(QRect(170, 30, 31, 27));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        lblCompletedCount_3->setFont(font2);
        lblCompletedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblCompletedCount_3->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(homeControlEmp);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(836, 10, 73, 67));
        label_15->setStyleSheet(QString::fromUtf8("border:transparentl"));
        label_15->setFrameShape(QFrame::StyledPanel);
        label_15->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(homeControlEmp);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(179, 270, 794, 332));
        frame_4->setStyleSheet(QString::fromUtf8("#frame_4{\n"
"border: 2px solid #797979;\n"
"border-radius:20px;}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(0);
        lblNameHeader_3 = new QLabel(frame_4);
        lblNameHeader_3->setObjectName(QString::fromUtf8("lblNameHeader_3"));
        lblNameHeader_3->setGeometry(QRect(247, 20, 341, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setWeight(50);
        lblNameHeader_3->setFont(font3);
        lblNameHeader_3->setAutoFillBackground(false);
        lblNameHeader_3->setStyleSheet(QString::fromUtf8("color: #fff;"));
        lblNameHeader_3->setFrameShadow(QFrame::Sunken);
        lblNameHeader_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblRoleHeader_3 = new QLabel(frame_4);
        lblRoleHeader_3->setObjectName(QString::fromUtf8("lblRoleHeader_3"));
        lblRoleHeader_3->setGeometry(QRect(250, 50, 131, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Segoe UI"));
        font4.setPointSize(12);
        lblRoleHeader_3->setFont(font4);
        lblRoleHeader_3->setStyleSheet(QString::fromUtf8("color: rgb(177, 177, 177);"));
        splitter_3 = new QSplitter(frame_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(250, 130, 411, 181));
        splitter_3->setOrientation(Qt::Vertical);
        lblName_3 = new QLabel(splitter_3);
        lblName_3->setObjectName(QString::fromUtf8("lblName_3"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
        font5.setPointSize(10);
        lblName_3->setFont(font5);
        lblName_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblName_3);
        lblGender_3 = new QLabel(splitter_3);
        lblGender_3->setObjectName(QString::fromUtf8("lblGender_3"));
        lblGender_3->setFont(font5);
        lblGender_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblGender_3);
        lblAddress_3 = new QLabel(splitter_3);
        lblAddress_3->setObjectName(QString::fromUtf8("lblAddress_3"));
        lblAddress_3->setFont(font5);
        lblAddress_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblAddress_3);
        lblDepartment_3 = new QLabel(splitter_3);
        lblDepartment_3->setObjectName(QString::fromUtf8("lblDepartment_3"));
        lblDepartment_3->setFont(font5);
        lblDepartment_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblDepartment_3);
        lblRole_3 = new QLabel(splitter_3);
        lblRole_3->setObjectName(QString::fromUtf8("lblRole_3"));
        lblRole_3->setFont(font5);
        lblRole_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblRole_3);
        lblUsername_3 = new QLabel(splitter_3);
        lblUsername_3->setObjectName(QString::fromUtf8("lblUsername_3"));
        lblUsername_3->setFont(font5);
        lblUsername_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblUsername_3);
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(220, 90, 571, 7));
        QFont font6;
        font6.setPointSize(12);
        line_3->setFont(font6);
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("background-color: #AAAAAA;"));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setLineWidth(0);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        pUserAvatar = new QLabel(homeControlEmp);
        pUserAvatar->setObjectName(QString::fromUtf8("pUserAvatar"));
        pUserAvatar->setGeometry(QRect(200, 190, 193, 182));
        pUserAvatar->setStyleSheet(QString::fromUtf8("border:transparentl"));
        pUserAvatar->setFrameShape(QFrame::StyledPanel);
        pUserAvatar->setAlignment(Qt::AlignCenter);
        frame = new QFrame(homeControlEmp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 37, 219, 68));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border: 2px solid #797979;\n"
"border-radius:10px;}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 10, 81, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);\n"
""));
        lblNotStartedCount_3 = new QLabel(frame);
        lblNotStartedCount_3->setObjectName(QString::fromUtf8("lblNotStartedCount_3"));
        lblNotStartedCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblNotStartedCount_3->setFont(font2);
        lblNotStartedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblNotStartedCount_3->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(homeControlEmp);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(470, 37, 219, 68));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3{\n"
"border: 2px solid #797979;\n"
"border-radius:10px;}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(120, 10, 81, 16));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);\n"
""));
        lblInProgressCount_3 = new QLabel(frame_3);
        lblInProgressCount_3->setObjectName(QString::fromUtf8("lblInProgressCount_3"));
        lblInProgressCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblInProgressCount_3->setFont(font2);
        lblInProgressCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblInProgressCount_3->setAlignment(Qt::AlignCenter);
        frame_2->raise();
        label_15->raise();
        frame_4->raise();
        pUserAvatar->raise();
        frame->raise();
        frame_3->raise();
        label_4->raise();
        label_8->raise();
        groupBox_3 = new QGroupBox(employeehomescreen);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 30, 1525, 71));
        groupBox_3->setStyleSheet(QString::fromUtf8("#groupBox_3\n"
"{\n"
"border: rgb(26, 31, 68); \n"
"border-bottom: 1px solid #878787;\n"
"border-top:1px solid #878787;\n"
"}\n"
""));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(130, 10, 351, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("HP Simplified"));
        font7.setPointSize(38);
        font7.setBold(false);
        font7.setWeight(50);
        label_16->setFont(font7);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnHome = new QPushButton(groupBox_3);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setGeometry(QRect(1090, 10, 130, 55));
        btnHome->setFont(font5);
        btnHome->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnHome->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnHome->setFlat(true);
        btnViewProjects = new QPushButton(groupBox_3);
        btnViewProjects->setObjectName(QString::fromUtf8("btnViewProjects"));
        btnViewProjects->setGeometry(QRect(1230, 10, 130, 55));
        btnViewProjects->setFont(font5);
        btnViewProjects->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnViewProjects->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnViewProjects->setFlat(true);
        btnLogout = new QPushButton(groupBox_3);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(1370, 10, 130, 55));
        btnLogout->setFont(font5);
        btnLogout->setContextMenuPolicy(Qt::DefaultContextMenu);
        btnLogout->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnLogout->setFlat(true);
        groupBox_3->raise();
        tcEmployeeProject->raise();
        homeControlEmp->raise();

        retranslateUi(employeehomescreen);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employeehomescreen);
    } // setupUi

    void retranslateUi(QDialog *employeehomescreen)
    {
        employeehomescreen->setWindowTitle(QCoreApplication::translate("employeehomescreen", "Dialog", nullptr));
        tcEmployeeProject->setTitle(QString());
        btnStartProjcet->setText(QCoreApplication::translate("employeehomescreen", "Start Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbAssigedProjects), QCoreApplication::translate("employeehomescreen", "Assigned Porjects", nullptr));
        btnCompleteProject->setText(QCoreApplication::translate("employeehomescreen", "Complete Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCurrentProject), QCoreApplication::translate("employeehomescreen", "Projects Inprogress", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCompletedProjects), QCoreApplication::translate("employeehomescreen", "Completed Projects", nullptr));
        homeControlEmp->setTitle(QString());
        label_8->setText(QCoreApplication::translate("employeehomescreen", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("employeehomescreen", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("employeehomescreen", "Completed", nullptr));
        lblCompletedCount_3->setText(QCoreApplication::translate("employeehomescreen", "5", nullptr));
        label_15->setText(QCoreApplication::translate("employeehomescreen", "TextLabel", nullptr));
        lblNameHeader_3->setText(QCoreApplication::translate("employeehomescreen", "David Mosby", nullptr));
        lblRoleHeader_3->setText(QCoreApplication::translate("employeehomescreen", "Manager", nullptr));
        lblName_3->setText(QCoreApplication::translate("employeehomescreen", "David Mosby", nullptr));
        lblGender_3->setText(QCoreApplication::translate("employeehomescreen", "Male", nullptr));
        lblAddress_3->setText(QCoreApplication::translate("employeehomescreen", "Lacinia Road, Lacinia ", nullptr));
        lblDepartment_3->setText(QCoreApplication::translate("employeehomescreen", "Finance Department", nullptr));
        lblRole_3->setText(QCoreApplication::translate("employeehomescreen", "Manager", nullptr));
        lblUsername_3->setText(QCoreApplication::translate("employeehomescreen", "SandaruK", nullptr));
        pUserAvatar->setText(QCoreApplication::translate("employeehomescreen", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("employeehomescreen", "Not Started", nullptr));
        lblNotStartedCount_3->setText(QCoreApplication::translate("employeehomescreen", "5", nullptr));
        label_13->setText(QCoreApplication::translate("employeehomescreen", "In Progress", nullptr));
        lblInProgressCount_3->setText(QCoreApplication::translate("employeehomescreen", "5", nullptr));
        groupBox_3->setTitle(QString());
        label_16->setText(QCoreApplication::translate("employeehomescreen", "WorkMate", nullptr));
        btnHome->setText(QCoreApplication::translate("employeehomescreen", "Home", nullptr));
        btnViewProjects->setText(QCoreApplication::translate("employeehomescreen", "Projects", nullptr));
        btnLogout->setText(QCoreApplication::translate("employeehomescreen", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employeehomescreen: public Ui_employeehomescreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEHOMESCREEN_H
