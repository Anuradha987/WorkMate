/********************************************************************************
** Form generated from reading UI file 'managerhomescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERHOMESCREEN_H
#define UI_MANAGERHOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerhomescreen
{
public:
    QGroupBox *manageProjectControl;
    QTableView *dgProject_2;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *txtProjectName;
    QComboBox *cbDepartment_2;
    QLineEdit *txtProjectCode;
    QComboBox *cbStartingMonth;
    QTextEdit *txtDescription;
    QPushButton *btnAssignUser_2;
    QPushButton *btnAddProject_2;
    QPushButton *btnDeleteProject_2;
    QPushButton *btnEditProject_2;
    QGroupBox *manageEmployeeControl;
    QTableView *dgEmployee_2;
    QGroupBox *groupBox;
    QLineEdit *txtEmployeeName;
    QLineEdit *txtPassword;
    QComboBox *cbUserRole;
    QComboBox *cbDepartment;
    QComboBox *cbGender;
    QLineEdit *txtUsername;
    QTextEdit *txtAddress;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *btnDeleteEmployee_2;
    QPushButton *btnEditEmployee_2;
    QPushButton *btnAddEmployee_2;
    QGroupBox *homeControlManager;
    QLabel *label_4;
    QFrame *frame;
    QLabel *label_7;
    QLabel *lblNotStartedCount_3;
    QLabel *label_8;
    QFrame *frame_3;
    QLabel *label_13;
    QLabel *lblInProgressCount_3;
    QFrame *frame_2;
    QLabel *label_14;
    QLabel *lblCompletedCount_3;
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
    QLabel *label_15;
    QLabel *pUserAvatar;
    QGroupBox *tcManagerProject;
    QTabWidget *tabWidget;
    QWidget *tbAssigedProjects;
    QPushButton *btnStartProjcet;
    QTableView *dgAssignedProjects;
    QWidget *tbCurrentProject;
    QPushButton *btnCompleteProject;
    QTableView *dgCurrentProjects;
    QWidget *tbCompletedProjects;
    QTableView *dgCompletedProjects;
    QGroupBox *groupBox_3;
    QLabel *label_16;
    QPushButton *btnHome;
    QPushButton *btnManageEmp;
    QPushButton *btnManageProjects;
    QPushButton *btnManageProjects_2;
    QPushButton *btnLogout;

    void setupUi(QDialog *managerhomescreen)
    {
        if (managerhomescreen->objectName().isEmpty())
            managerhomescreen->setObjectName(QString::fromUtf8("managerhomescreen"));
        managerhomescreen->resize(1525, 944);
        managerhomescreen->setStyleSheet(QString::fromUtf8("background-color: #1B2131;"));
        manageProjectControl = new QGroupBox(managerhomescreen);
        manageProjectControl->setObjectName(QString::fromUtf8("manageProjectControl"));
        manageProjectControl->setGeometry(QRect(0, 170, 1531, 751));
        manageProjectControl->setStyleSheet(QString::fromUtf8("#manageProjectControl{\n"
"nbackground-color: #1B2131;\n"
"border:#1B2131;}"));
        dgProject_2 = new QTableView(manageProjectControl);
        dgProject_2->setObjectName(QString::fromUtf8("dgProject_2"));
        dgProject_2->setGeometry(QRect(640, 30, 821, 671));
        dgProject_2->setStyleSheet(QString::fromUtf8("color: #AFAFAF;"));
        groupBox_2 = new QGroupBox(manageProjectControl);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 10, 521, 721));
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"border-radius:10px;\n"
"border: 1px solid #797979;\n"
"}"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(65, 140, 131, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(65, 390, 121, 21));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(65, 240, 101, 16));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(65, 490, 101, 16));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(65, 40, 111, 16));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        txtProjectName = new QLineEdit(groupBox_2);
        txtProjectName->setObjectName(QString::fromUtf8("txtProjectName"));
        txtProjectName->setGeometry(QRect(55, 170, 400, 35));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        txtProjectName->setFont(font1);
        txtProjectName->setStyleSheet(QString::fromUtf8("#txtProjectName{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbDepartment_2 = new QComboBox(groupBox_2);
        cbDepartment_2->setObjectName(QString::fromUtf8("cbDepartment_2"));
        cbDepartment_2->setGeometry(QRect(55, 520, 400, 35));
        cbDepartment_2->setFont(font1);
        cbDepartment_2->setStyleSheet(QString::fromUtf8("#cbDepartment_2{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtProjectCode = new QLineEdit(groupBox_2);
        txtProjectCode->setObjectName(QString::fromUtf8("txtProjectCode"));
        txtProjectCode->setGeometry(QRect(55, 70, 400, 35));
        txtProjectCode->setFont(font1);
        txtProjectCode->setStyleSheet(QString::fromUtf8("#txtProjectCode{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbStartingMonth = new QComboBox(groupBox_2);
        cbStartingMonth->setObjectName(QString::fromUtf8("cbStartingMonth"));
        cbStartingMonth->setGeometry(QRect(55, 420, 400, 35));
        cbStartingMonth->setFont(font1);
        cbStartingMonth->setStyleSheet(QString::fromUtf8("#cbStartingMonth{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtDescription = new QTextEdit(groupBox_2);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));
        txtDescription->setGeometry(QRect(55, 270, 400, 96));
        txtDescription->setFont(font1);
        txtDescription->setStyleSheet(QString::fromUtf8("#txtDescription{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        btnAssignUser_2 = new QPushButton(groupBox_2);
        btnAssignUser_2->setObjectName(QString::fromUtf8("btnAssignUser_2"));
        btnAssignUser_2->setGeometry(QRect(270, 650, 180, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btnAssignUser_2->setFont(font2);
        btnAssignUser_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnAddProject_2 = new QPushButton(groupBox_2);
        btnAddProject_2->setObjectName(QString::fromUtf8("btnAddProject_2"));
        btnAddProject_2->setGeometry(QRect(50, 590, 180, 40));
        btnAddProject_2->setFont(font2);
        btnAddProject_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnDeleteProject_2 = new QPushButton(groupBox_2);
        btnDeleteProject_2->setObjectName(QString::fromUtf8("btnDeleteProject_2"));
        btnDeleteProject_2->setGeometry(QRect(50, 650, 180, 40));
        btnDeleteProject_2->setFont(font2);
        btnDeleteProject_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnEditProject_2 = new QPushButton(groupBox_2);
        btnEditProject_2->setObjectName(QString::fromUtf8("btnEditProject_2"));
        btnEditProject_2->setGeometry(QRect(270, 590, 180, 40));
        btnEditProject_2->setFont(font2);
        btnEditProject_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        manageEmployeeControl = new QGroupBox(managerhomescreen);
        manageEmployeeControl->setObjectName(QString::fromUtf8("manageEmployeeControl"));
        manageEmployeeControl->setGeometry(QRect(0, 180, 1521, 761));
        manageEmployeeControl->setStyleSheet(QString::fromUtf8("#manageEmployeeControl{\n"
"background-color: #1B2131;\n"
"border:#1B2131;\n"
"}"));
        dgEmployee_2 = new QTableView(manageEmployeeControl);
        dgEmployee_2->setObjectName(QString::fromUtf8("dgEmployee_2"));
        dgEmployee_2->setGeometry(QRect(570, 20, 901, 701));
        dgEmployee_2->setStyleSheet(QString::fromUtf8("color: #AFAFAF;"));
        groupBox = new QGroupBox(manageEmployeeControl);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 0, 461, 731));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"border-radius:10px;\n"
"border: 1px solid #797979;\n"
"}"));
        txtEmployeeName = new QLineEdit(groupBox);
        txtEmployeeName->setObjectName(QString::fromUtf8("txtEmployeeName"));
        txtEmployeeName->setGeometry(QRect(20, 50, 400, 35));
        txtEmployeeName->setFont(font1);
        txtEmployeeName->setStyleSheet(QString::fromUtf8("#txtEmployeeName{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtPassword = new QLineEdit(groupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(20, 600, 400, 35));
        txtPassword->setFont(font1);
        txtPassword->setStyleSheet(QString::fromUtf8("#txtPassword{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbUserRole = new QComboBox(groupBox);
        cbUserRole->setObjectName(QString::fromUtf8("cbUserRole"));
        cbUserRole->setGeometry(QRect(250, 300, 170, 35));
        cbUserRole->setFont(font1);
        cbUserRole->setStyleSheet(QString::fromUtf8("#cbUserRole{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbDepartment = new QComboBox(groupBox);
        cbDepartment->setObjectName(QString::fromUtf8("cbDepartment"));
        cbDepartment->setGeometry(QRect(20, 400, 400, 35));
        cbDepartment->setFont(font1);
        cbDepartment->setStyleSheet(QString::fromUtf8("#cbDepartment{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbGender = new QComboBox(groupBox);
        cbGender->setObjectName(QString::fromUtf8("cbGender"));
        cbGender->setGeometry(QRect(20, 300, 170, 35));
        cbGender->setFont(font1);
        cbGender->setStyleSheet(QString::fromUtf8("#cbGender{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtUsername = new QLineEdit(groupBox);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(20, 500, 400, 35));
        txtUsername->setFont(font1);
        txtUsername->setStyleSheet(QString::fromUtf8("#txtUsername{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtAddress = new QTextEdit(groupBox);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));
        txtAddress->setGeometry(QRect(20, 150, 400, 85));
        txtAddress->setFont(font1);
        txtAddress->setStyleSheet(QString::fromUtf8("#txtAddress{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 570, 92, 30));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 92, 30));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 370, 121, 30));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 270, 92, 30));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 270, 92, 30));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 470, 92, 30));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 20, 131, 30));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnDeleteEmployee_2 = new QPushButton(groupBox);
        btnDeleteEmployee_2->setObjectName(QString::fromUtf8("btnDeleteEmployee_2"));
        btnDeleteEmployee_2->setGeometry(QRect(310, 670, 120, 35));
        btnDeleteEmployee_2->setFont(font2);
        btnDeleteEmployee_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        btnEditEmployee_2 = new QPushButton(groupBox);
        btnEditEmployee_2->setObjectName(QString::fromUtf8("btnEditEmployee_2"));
        btnEditEmployee_2->setGeometry(QRect(167, 670, 120, 35));
        btnEditEmployee_2->setFont(font2);
        btnEditEmployee_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        btnAddEmployee_2 = new QPushButton(groupBox);
        btnAddEmployee_2->setObjectName(QString::fromUtf8("btnAddEmployee_2"));
        btnAddEmployee_2->setGeometry(QRect(20, 670, 120, 35));
        btnAddEmployee_2->setFont(font2);
        btnAddEmployee_2->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        homeControlManager = new QGroupBox(managerhomescreen);
        homeControlManager->setObjectName(QString::fromUtf8("homeControlManager"));
        homeControlManager->setGeometry(QRect(180, 220, 1211, 681));
        homeControlManager->setStyleSheet(QString::fromUtf8("#homeControlManager{\n"
"background-color: #1B2131;\n"
"border:#1B2131;}"));
        label_4 = new QLabel(homeControlManager);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(131, 10, 73, 67));
        label_4->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setAlignment(Qt::AlignCenter);
        frame = new QFrame(homeControlManager);
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
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(9);
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblNotStartedCount_3 = new QLabel(frame);
        lblNotStartedCount_3->setObjectName(QString::fromUtf8("lblNotStartedCount_3"));
        lblNotStartedCount_3->setGeometry(QRect(170, 30, 31, 27));
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setWeight(75);
        lblNotStartedCount_3->setFont(font4);
        lblNotStartedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblNotStartedCount_3->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(homeControlManager);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(486, 10, 73, 67));
        label_8->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(homeControlManager);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(470, 37, 219, 68));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3{\n"
"border: 2px solid #797979;\n"
"border-radius:10px;}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(120, 7, 81, 18));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblInProgressCount_3 = new QLabel(frame_3);
        lblInProgressCount_3->setObjectName(QString::fromUtf8("lblInProgressCount_3"));
        lblInProgressCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblInProgressCount_3->setFont(font4);
        lblInProgressCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblInProgressCount_3->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(homeControlManager);
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
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblCompletedCount_3 = new QLabel(frame_2);
        lblCompletedCount_3->setObjectName(QString::fromUtf8("lblCompletedCount_3"));
        lblCompletedCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblCompletedCount_3->setFont(font4);
        lblCompletedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblCompletedCount_3->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(homeControlManager);
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
        lblNameHeader_3->setGeometry(QRect(247, 20, 421, 35));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI"));
        font5.setPointSize(16);
        lblNameHeader_3->setFont(font5);
        lblNameHeader_3->setAutoFillBackground(false);
        lblNameHeader_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblNameHeader_3->setFrameShadow(QFrame::Sunken);
        lblNameHeader_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblRoleHeader_3 = new QLabel(frame_4);
        lblRoleHeader_3->setObjectName(QString::fromUtf8("lblRoleHeader_3"));
        lblRoleHeader_3->setGeometry(QRect(250, 50, 131, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(12);
        lblRoleHeader_3->setFont(font6);
        lblRoleHeader_3->setStyleSheet(QString::fromUtf8("color: rgb(177, 177, 177);"));
        splitter_3 = new QSplitter(frame_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(250, 130, 391, 181));
        splitter_3->setOrientation(Qt::Vertical);
        lblName_3 = new QLabel(splitter_3);
        lblName_3->setObjectName(QString::fromUtf8("lblName_3"));
        lblName_3->setFont(font1);
        lblName_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblName_3);
        lblGender_3 = new QLabel(splitter_3);
        lblGender_3->setObjectName(QString::fromUtf8("lblGender_3"));
        lblGender_3->setFont(font1);
        lblGender_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblGender_3);
        lblAddress_3 = new QLabel(splitter_3);
        lblAddress_3->setObjectName(QString::fromUtf8("lblAddress_3"));
        lblAddress_3->setFont(font1);
        lblAddress_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblAddress_3);
        lblDepartment_3 = new QLabel(splitter_3);
        lblDepartment_3->setObjectName(QString::fromUtf8("lblDepartment_3"));
        lblDepartment_3->setFont(font1);
        lblDepartment_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblDepartment_3);
        lblRole_3 = new QLabel(splitter_3);
        lblRole_3->setObjectName(QString::fromUtf8("lblRole_3"));
        lblRole_3->setFont(font1);
        lblRole_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblRole_3);
        lblUsername_3 = new QLabel(splitter_3);
        lblUsername_3->setObjectName(QString::fromUtf8("lblUsername_3"));
        lblUsername_3->setFont(font1);
        lblUsername_3->setStyleSheet(QString::fromUtf8("color: #B7B7B9;"));
        splitter_3->addWidget(lblUsername_3);
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(220, 90, 571, 7));
        QFont font7;
        font7.setPointSize(12);
        line_3->setFont(font7);
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("background-color: #AAAAAA;"));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setLineWidth(0);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        label_15 = new QLabel(homeControlManager);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(836, 10, 73, 67));
        label_15->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_15->setFrameShape(QFrame::StyledPanel);
        label_15->setAlignment(Qt::AlignCenter);
        pUserAvatar = new QLabel(homeControlManager);
        pUserAvatar->setObjectName(QString::fromUtf8("pUserAvatar"));
        pUserAvatar->setGeometry(QRect(200, 190, 193, 182));
        pUserAvatar->setStyleSheet(QString::fromUtf8("#pUserAvatar{border:transparent;}\n"
""));
        pUserAvatar->setFrameShape(QFrame::StyledPanel);
        pUserAvatar->setAlignment(Qt::AlignCenter);
        frame->raise();
        frame_3->raise();
        frame_2->raise();
        frame_4->raise();
        label_15->raise();
        pUserAvatar->raise();
        label_4->raise();
        label_8->raise();
        tcManagerProject = new QGroupBox(managerhomescreen);
        tcManagerProject->setObjectName(QString::fromUtf8("tcManagerProject"));
        tcManagerProject->setGeometry(QRect(-1, 170, 1531, 751));
        tcManagerProject->setStyleSheet(QString::fromUtf8("#tcManagerProject{\n"
"background-color: #1B2131;\n"
"border:#1B2131;}"));
        tabWidget = new QTabWidget(tcManagerProject);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 20, 1421, 701));
        tabWidget->setFont(font2);
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        tbAssigedProjects = new QWidget();
        tbAssigedProjects->setObjectName(QString::fromUtf8("tbAssigedProjects"));
        btnStartProjcet = new QPushButton(tbAssigedProjects);
        btnStartProjcet->setObjectName(QString::fromUtf8("btnStartProjcet"));
        btnStartProjcet->setGeometry(QRect(1130, 590, 191, 41));
        btnStartProjcet->setFont(font2);
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
        btnCompleteProject->setFont(font2);
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
        groupBox_3 = new QGroupBox(managerhomescreen);
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
        QFont font8;
        font8.setFamily(QString::fromUtf8("HP Simplified"));
        font8.setPointSize(38);
        font8.setBold(false);
        font8.setWeight(50);
        label_16->setFont(font8);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btnHome = new QPushButton(groupBox_3);
        btnHome->setObjectName(QString::fromUtf8("btnHome"));
        btnHome->setGeometry(QRect(830, 10, 130, 55));
        btnHome->setFont(font1);
        btnHome->setStyleSheet(QString::fromUtf8("color: #fff;"));
        btnHome->setFlat(true);
        btnManageEmp = new QPushButton(groupBox_3);
        btnManageEmp->setObjectName(QString::fromUtf8("btnManageEmp"));
        btnManageEmp->setGeometry(QRect(960, 10, 130, 55));
        btnManageEmp->setFont(font1);
        btnManageEmp->setStyleSheet(QString::fromUtf8("color: #fff;"));
        btnManageEmp->setFlat(true);
        btnManageProjects = new QPushButton(groupBox_3);
        btnManageProjects->setObjectName(QString::fromUtf8("btnManageProjects"));
        btnManageProjects->setGeometry(QRect(1090, 10, 130, 55));
        btnManageProjects->setFont(font1);
        btnManageProjects->setStyleSheet(QString::fromUtf8("color: #fff;"));
        btnManageProjects->setFlat(true);
        btnManageProjects_2 = new QPushButton(groupBox_3);
        btnManageProjects_2->setObjectName(QString::fromUtf8("btnManageProjects_2"));
        btnManageProjects_2->setGeometry(QRect(1230, 10, 130, 55));
        btnManageProjects_2->setFont(font1);
        btnManageProjects_2->setStyleSheet(QString::fromUtf8("color: #fff;"));
        btnManageProjects_2->setFlat(true);
        btnLogout = new QPushButton(groupBox_3);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(1370, 10, 130, 55));
        btnLogout->setFont(font1);
        btnLogout->setStyleSheet(QString::fromUtf8("color: #fff;"));
        btnLogout->setFlat(true);
        groupBox_3->raise();
        manageEmployeeControl->raise();
        manageProjectControl->raise();
        homeControlManager->raise();
        tcManagerProject->raise();

        retranslateUi(managerhomescreen);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(managerhomescreen);
    } // setupUi

    void retranslateUi(QDialog *managerhomescreen)
    {
        managerhomescreen->setWindowTitle(QCoreApplication::translate("managerhomescreen", "Dialog", nullptr));
        manageProjectControl->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_12->setText(QCoreApplication::translate("managerhomescreen", "Project Name", nullptr));
        label_19->setText(QCoreApplication::translate("managerhomescreen", "Starting Month", nullptr));
        label_20->setText(QCoreApplication::translate("managerhomescreen", "Description", nullptr));
        label_21->setText(QCoreApplication::translate("managerhomescreen", "Department", nullptr));
        label_22->setText(QCoreApplication::translate("managerhomescreen", "Project Code", nullptr));
        txtProjectName->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the project name", nullptr));
        cbDepartment_2->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Select the department", nullptr));
        txtProjectCode->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the project code", nullptr));
        cbStartingMonth->setCurrentText(QString());
        cbStartingMonth->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Select the month", nullptr));
        txtDescription->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the description", nullptr));
        btnAssignUser_2->setText(QCoreApplication::translate("managerhomescreen", "Assign User", nullptr));
        btnAddProject_2->setText(QCoreApplication::translate("managerhomescreen", "Add", nullptr));
        btnDeleteProject_2->setText(QCoreApplication::translate("managerhomescreen", "Delete", nullptr));
        btnEditProject_2->setText(QCoreApplication::translate("managerhomescreen", "Update", nullptr));
        manageEmployeeControl->setTitle(QString());
        groupBox->setTitle(QString());
        txtEmployeeName->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the name", nullptr));
        txtPassword->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the password", nullptr));
        cbUserRole->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Select user role", nullptr));
        cbDepartment->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Select the department", nullptr));
        cbGender->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Select the gender", nullptr));
        txtUsername->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the username", nullptr));
        txtAddress->setPlaceholderText(QCoreApplication::translate("managerhomescreen", "Enter the address", nullptr));
        label_9->setText(QCoreApplication::translate("managerhomescreen", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("managerhomescreen", "Address", nullptr));
        label_5->setText(QCoreApplication::translate("managerhomescreen", "Department", nullptr));
        label_6->setText(QCoreApplication::translate("managerhomescreen", "User Role", nullptr));
        label_3->setText(QCoreApplication::translate("managerhomescreen", "Gender", nullptr));
        label_10->setText(QCoreApplication::translate("managerhomescreen", "Username", nullptr));
        label_11->setText(QCoreApplication::translate("managerhomescreen", "Full Name", nullptr));
        btnDeleteEmployee_2->setText(QCoreApplication::translate("managerhomescreen", "Delete", nullptr));
        btnEditEmployee_2->setText(QCoreApplication::translate("managerhomescreen", "Update", nullptr));
        btnAddEmployee_2->setText(QCoreApplication::translate("managerhomescreen", "Add", nullptr));
        homeControlManager->setTitle(QString());
        label_4->setText(QCoreApplication::translate("managerhomescreen", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("managerhomescreen", "Not Started", nullptr));
        lblNotStartedCount_3->setText(QCoreApplication::translate("managerhomescreen", "5", nullptr));
        label_8->setText(QCoreApplication::translate("managerhomescreen", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("managerhomescreen", "In Progress", nullptr));
        lblInProgressCount_3->setText(QCoreApplication::translate("managerhomescreen", "5", nullptr));
        label_14->setText(QCoreApplication::translate("managerhomescreen", "Completed", nullptr));
        lblCompletedCount_3->setText(QCoreApplication::translate("managerhomescreen", "5", nullptr));
        lblNameHeader_3->setText(QCoreApplication::translate("managerhomescreen", "David Mosby", nullptr));
        lblRoleHeader_3->setText(QCoreApplication::translate("managerhomescreen", "Manager", nullptr));
        lblName_3->setText(QCoreApplication::translate("managerhomescreen", "David Mosby", nullptr));
        lblGender_3->setText(QCoreApplication::translate("managerhomescreen", "Male", nullptr));
        lblAddress_3->setText(QCoreApplication::translate("managerhomescreen", "Lacinia Road, Lacinia ", nullptr));
        lblDepartment_3->setText(QCoreApplication::translate("managerhomescreen", "Finance Department", nullptr));
        lblRole_3->setText(QCoreApplication::translate("managerhomescreen", "Manager", nullptr));
        lblUsername_3->setText(QCoreApplication::translate("managerhomescreen", "SandaruK", nullptr));
        label_15->setText(QCoreApplication::translate("managerhomescreen", "TextLabel", nullptr));
        pUserAvatar->setText(QCoreApplication::translate("managerhomescreen", "TextLabel", nullptr));
        tcManagerProject->setTitle(QString());
        btnStartProjcet->setText(QCoreApplication::translate("managerhomescreen", "Start Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbAssigedProjects), QCoreApplication::translate("managerhomescreen", "Assigned Porjects", nullptr));
        btnCompleteProject->setText(QCoreApplication::translate("managerhomescreen", "Complete Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCurrentProject), QCoreApplication::translate("managerhomescreen", "Projects Inprogress", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCompletedProjects), QCoreApplication::translate("managerhomescreen", "Completed Projects", nullptr));
        groupBox_3->setTitle(QString());
        label_16->setText(QCoreApplication::translate("managerhomescreen", "WorkMate", nullptr));
        btnHome->setText(QCoreApplication::translate("managerhomescreen", "Home", nullptr));
        btnManageEmp->setText(QCoreApplication::translate("managerhomescreen", "Employees", nullptr));
        btnManageProjects->setText(QCoreApplication::translate("managerhomescreen", "Projects", nullptr));
        btnManageProjects_2->setText(QCoreApplication::translate("managerhomescreen", "My Projects", nullptr));
        btnLogout->setText(QCoreApplication::translate("managerhomescreen", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerhomescreen: public Ui_managerhomescreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERHOMESCREEN_H
