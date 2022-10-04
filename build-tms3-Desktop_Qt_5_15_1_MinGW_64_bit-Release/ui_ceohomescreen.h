/********************************************************************************
** Form generated from reading UI file 'ceohomescreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CEOHOMESCREEN_H
#define UI_CEOHOMESCREEN_H

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

class Ui_ceohomescreen
{
public:
    QGroupBox *homeControlCEO;
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
    QFrame *line_3;
    QSplitter *splitter_3;
    QLabel *lblName_3;
    QLabel *lblGender_3;
    QLabel *lblAddress_3;
    QLabel *lblDepartment_3;
    QLabel *lblRole_3;
    QLabel *lblUsername_3;
    QLabel *label_15;
    QLabel *pUserAvatar;
    QGroupBox *ucManageEmployeeControl;
    QTableView *dgEmployee;
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
    QPushButton *btnDeleteEmployee;
    QPushButton *btnAddEmployee;
    QPushButton *btnEditEmployee;
    QGroupBox *usManageProjectControl;
    QTableView *dgProject_2;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_21;
    QLineEdit *txtProjectName;
    QLineEdit *txtProjectCode;
    QComboBox *cbStartingMonth;
    QTextEdit *txtDescription;
    QLabel *label_20;
    QComboBox *cbDepartment_2;
    QPushButton *btnAssignUser_2;
    QPushButton *btnAddProject_2;
    QPushButton *btnEditProject_2;
    QPushButton *btnDeleteProject_2;
    QGroupBox *tcCEOProject;
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
    QPushButton *button1;
    QPushButton *btnManageProjectsCEO;
    QPushButton *btnManageEmpCEO;
    QPushButton *btnHomeCEO;
    QPushButton *btnManageProjects_2;
    QLabel *label_16;

    void setupUi(QDialog *ceohomescreen)
    {
        if (ceohomescreen->objectName().isEmpty())
            ceohomescreen->setObjectName(QString::fromUtf8("ceohomescreen"));
        ceohomescreen->resize(1525, 944);
        ceohomescreen->setStyleSheet(QString::fromUtf8("\n"
"background-color: #1B2131;"));
        homeControlCEO = new QGroupBox(ceohomescreen);
        homeControlCEO->setObjectName(QString::fromUtf8("homeControlCEO"));
        homeControlCEO->setGeometry(QRect(180, 220, 1211, 681));
        homeControlCEO->setStyleSheet(QString::fromUtf8("border: treansparent; \n"
"background-color: #1B2131;"));
        label_4 = new QLabel(homeControlCEO);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(131, 10, 73, 67));
        label_4->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setAlignment(Qt::AlignCenter);
        frame = new QFrame(homeControlCEO);
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
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(9);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblNotStartedCount_3 = new QLabel(frame);
        lblNotStartedCount_3->setObjectName(QString::fromUtf8("lblNotStartedCount_3"));
        lblNotStartedCount_3->setGeometry(QRect(170, 30, 31, 27));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        lblNotStartedCount_3->setFont(font1);
        lblNotStartedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblNotStartedCount_3->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(homeControlCEO);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(486, 10, 73, 67));
        label_8->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setAlignment(Qt::AlignCenter);
        frame_3 = new QFrame(homeControlCEO);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(470, 37, 219, 68));
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3{\n"
"border: 2px solid #797979;\n"
"border-radius:10px;}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(120, 6, 81, 21));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblInProgressCount_3 = new QLabel(frame_3);
        lblInProgressCount_3->setObjectName(QString::fromUtf8("lblInProgressCount_3"));
        lblInProgressCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblInProgressCount_3->setFont(font1);
        lblInProgressCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblInProgressCount_3->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(homeControlCEO);
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
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);"));
        lblCompletedCount_3 = new QLabel(frame_2);
        lblCompletedCount_3->setObjectName(QString::fromUtf8("lblCompletedCount_3"));
        lblCompletedCount_3->setGeometry(QRect(170, 30, 31, 27));
        lblCompletedCount_3->setFont(font1);
        lblCompletedCount_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblCompletedCount_3->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(homeControlCEO);
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
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(16);
        lblNameHeader_3->setFont(font2);
        lblNameHeader_3->setAutoFillBackground(false);
        lblNameHeader_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lblNameHeader_3->setFrameShadow(QFrame::Sunken);
        lblNameHeader_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lblRoleHeader_3 = new QLabel(frame_4);
        lblRoleHeader_3->setObjectName(QString::fromUtf8("lblRoleHeader_3"));
        lblRoleHeader_3->setGeometry(QRect(250, 50, 131, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(12);
        lblRoleHeader_3->setFont(font3);
        lblRoleHeader_3->setStyleSheet(QString::fromUtf8("color: rgb(177, 177, 177);"));
        line_3 = new QFrame(frame_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(220, 90, 571, 7));
        QFont font4;
        font4.setPointSize(12);
        line_3->setFont(font4);
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("background-color: #AAAAAA;"));
        line_3->setFrameShadow(QFrame::Raised);
        line_3->setLineWidth(2);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::HLine);
        splitter_3 = new QSplitter(frame_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(250, 130, 401, 181));
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
        label_15 = new QLabel(homeControlCEO);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(836, 10, 73, 67));
        label_15->setStyleSheet(QString::fromUtf8("border:transparent;"));
        label_15->setFrameShape(QFrame::StyledPanel);
        label_15->setAlignment(Qt::AlignCenter);
        pUserAvatar = new QLabel(homeControlCEO);
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
        ucManageEmployeeControl = new QGroupBox(ceohomescreen);
        ucManageEmployeeControl->setObjectName(QString::fromUtf8("ucManageEmployeeControl"));
        ucManageEmployeeControl->setGeometry(QRect(0, 180, 1521, 761));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        ucManageEmployeeControl->setFont(font6);
        ucManageEmployeeControl->setStyleSheet(QString::fromUtf8("#ucManageEmployeeControl{\n"
"background-color: #1B2131;\n"
"border:#1B2131;\n"
"}"));
        dgEmployee = new QTableView(ucManageEmployeeControl);
        dgEmployee->setObjectName(QString::fromUtf8("dgEmployee"));
        dgEmployee->setGeometry(QRect(570, 20, 901, 701));
        QPalette palette;
        QBrush brush(QColor(175, 175, 175, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(27, 33, 49, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(175, 175, 175, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(175, 175, 175, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(175, 175, 175, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        dgEmployee->setPalette(palette);
        dgEmployee->setToolTipDuration(1);
        dgEmployee->setAutoFillBackground(false);
        dgEmployee->setStyleSheet(QString::fromUtf8("\n"
"background-color: #1B2131;color: #AFAFAF;"));
        dgEmployee->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        dgEmployee->setShowGrid(true);
        dgEmployee->setGridStyle(Qt::DashLine);
        dgEmployee->setSortingEnabled(false);
        dgEmployee->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        dgEmployee->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        groupBox = new QGroupBox(ucManageEmployeeControl);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 0, 461, 731));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font7.setPointSize(9);
        groupBox->setFont(font7);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"border-radius:10px;\n"
"border: 1px solid #797979;\n"
"}"));
        txtEmployeeName = new QLineEdit(groupBox);
        txtEmployeeName->setObjectName(QString::fromUtf8("txtEmployeeName"));
        txtEmployeeName->setGeometry(QRect(20, 50, 400, 35));
        txtEmployeeName->setFont(font5);
        txtEmployeeName->setStyleSheet(QString::fromUtf8("\n"
"#txtEmployeeName{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtPassword = new QLineEdit(groupBox);
        txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
        txtPassword->setGeometry(QRect(20, 600, 400, 35));
        txtPassword->setFont(font5);
        txtPassword->setStyleSheet(QString::fromUtf8("#txtPassword{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbUserRole = new QComboBox(groupBox);
        cbUserRole->setObjectName(QString::fromUtf8("cbUserRole"));
        cbUserRole->setGeometry(QRect(250, 300, 170, 35));
        cbUserRole->setFont(font5);
        cbUserRole->setFocusPolicy(Qt::WheelFocus);
        cbUserRole->setContextMenuPolicy(Qt::DefaultContextMenu);
        cbUserRole->setToolTipDuration(1);
        cbUserRole->setStyleSheet(QString::fromUtf8("#cbUserRole{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbUserRole->setFrame(true);
        cbDepartment = new QComboBox(groupBox);
        cbDepartment->setObjectName(QString::fromUtf8("cbDepartment"));
        cbDepartment->setGeometry(QRect(20, 400, 400, 35));
        cbDepartment->setFont(font5);
        cbDepartment->setStyleSheet(QString::fromUtf8("#cbDepartment{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbGender = new QComboBox(groupBox);
        cbGender->setObjectName(QString::fromUtf8("cbGender"));
        cbGender->setGeometry(QRect(20, 300, 170, 35));
        cbGender->setFont(font5);
        cbGender->setStyleSheet(QString::fromUtf8("#cbGender{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtUsername = new QLineEdit(groupBox);
        txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
        txtUsername->setGeometry(QRect(20, 500, 400, 35));
        txtUsername->setFont(font5);
        txtUsername->setStyleSheet(QString::fromUtf8("#txtUsername{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtAddress = new QTextEdit(groupBox);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));
        txtAddress->setGeometry(QRect(20, 150, 400, 85));
        txtAddress->setFont(font5);
        txtAddress->setStyleSheet(QString::fromUtf8("#txtAddress{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 570, 92, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Segoe UI"));
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setWeight(75);
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 92, 30));
        label_2->setFont(font8);
        label_2->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 370, 121, 30));
        label_5->setFont(font8);
        label_5->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 270, 92, 30));
        label_6->setFont(font8);
        label_6->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 270, 92, 30));
        label_3->setFont(font8);
        label_3->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 470, 92, 30));
        label_10->setFont(font8);
        label_10->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 20, 131, 30));
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btnDeleteEmployee = new QPushButton(groupBox);
        btnDeleteEmployee->setObjectName(QString::fromUtf8("btnDeleteEmployee"));
        btnDeleteEmployee->setGeometry(QRect(310, 670, 120, 35));
        btnDeleteEmployee->setFont(font8);
        btnDeleteEmployee->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        btnAddEmployee = new QPushButton(groupBox);
        btnAddEmployee->setObjectName(QString::fromUtf8("btnAddEmployee"));
        btnAddEmployee->setGeometry(QRect(20, 670, 120, 35));
        btnAddEmployee->setFont(font8);
        btnAddEmployee->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        btnAddEmployee->setFlat(false);
        btnEditEmployee = new QPushButton(groupBox);
        btnEditEmployee->setObjectName(QString::fromUtf8("btnEditEmployee"));
        btnEditEmployee->setGeometry(QRect(167, 670, 120, 35));
        btnEditEmployee->setFont(font8);
        btnEditEmployee->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        usManageProjectControl = new QGroupBox(ceohomescreen);
        usManageProjectControl->setObjectName(QString::fromUtf8("usManageProjectControl"));
        usManageProjectControl->setGeometry(QRect(0, 170, 1531, 751));
        usManageProjectControl->setStyleSheet(QString::fromUtf8("#usManageProjectControl{\n"
"background-color: #1B2131;\n"
"border: #1B2131;}\n"
"\n"
""));
        dgProject_2 = new QTableView(usManageProjectControl);
        dgProject_2->setObjectName(QString::fromUtf8("dgProject_2"));
        dgProject_2->setGeometry(QRect(640, 30, 821, 671));
        dgProject_2->setStyleSheet(QString::fromUtf8("color: #AFAFAF;"));
        groupBox_2 = new QGroupBox(usManageProjectControl);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(70, 10, 521, 721));
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"border-radius:10px;\n"
"border: 1px solid #797979;\n"
"}"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(65, 140, 121, 16));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Segoe UI"));
        font9.setPointSize(9);
        font9.setBold(true);
        font9.setWeight(75);
        label_12->setFont(font9);
        label_12->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(65, 390, 111, 21));
        label_18->setFont(font9);
        label_18->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(65, 240, 111, 16));
        label_19->setFont(font9);
        label_19->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(65, 40, 111, 16));
        label_21->setFont(font9);
        label_21->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        txtProjectName = new QLineEdit(groupBox_2);
        txtProjectName->setObjectName(QString::fromUtf8("txtProjectName"));
        txtProjectName->setGeometry(QRect(55, 170, 400, 35));
        txtProjectName->setFont(font5);
        txtProjectName->setStyleSheet(QString::fromUtf8("\n"
"#txtProjectName{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtProjectCode = new QLineEdit(groupBox_2);
        txtProjectCode->setObjectName(QString::fromUtf8("txtProjectCode"));
        txtProjectCode->setGeometry(QRect(55, 70, 400, 35));
        txtProjectCode->setFont(font5);
        txtProjectCode->setStyleSheet(QString::fromUtf8("\n"
"#txtProjectCode{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        cbStartingMonth = new QComboBox(groupBox_2);
        cbStartingMonth->setObjectName(QString::fromUtf8("cbStartingMonth"));
        cbStartingMonth->setGeometry(QRect(55, 420, 400, 35));
        cbStartingMonth->setFont(font5);
        cbStartingMonth->setStyleSheet(QString::fromUtf8("\n"
"#cbStartingMonth{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        txtDescription = new QTextEdit(groupBox_2);
        txtDescription->setObjectName(QString::fromUtf8("txtDescription"));
        txtDescription->setGeometry(QRect(55, 270, 400, 96));
        txtDescription->setFont(font5);
        txtDescription->setStyleSheet(QString::fromUtf8("\n"
"#txtDescription{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;}"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(65, 490, 101, 16));
        label_20->setFont(font9);
        label_20->setStyleSheet(QString::fromUtf8("color: #F6AFC6;"));
        cbDepartment_2 = new QComboBox(groupBox_2);
        cbDepartment_2->setObjectName(QString::fromUtf8("cbDepartment_2"));
        cbDepartment_2->setGeometry(QRect(55, 520, 400, 35));
        cbDepartment_2->setFont(font5);
        cbDepartment_2->setStyleSheet(QString::fromUtf8("\n"
"#cbDepartment_2{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"padding-left:7px;\n"
"}"));
        btnAssignUser_2 = new QPushButton(groupBox_2);
        btnAssignUser_2->setObjectName(QString::fromUtf8("btnAssignUser_2"));
        btnAssignUser_2->setGeometry(QRect(270, 650, 180, 40));
        btnAssignUser_2->setFont(font8);
        btnAssignUser_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnAddProject_2 = new QPushButton(groupBox_2);
        btnAddProject_2->setObjectName(QString::fromUtf8("btnAddProject_2"));
        btnAddProject_2->setGeometry(QRect(50, 590, 180, 40));
        btnAddProject_2->setFont(font8);
        btnAddProject_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnEditProject_2 = new QPushButton(groupBox_2);
        btnEditProject_2->setObjectName(QString::fromUtf8("btnEditProject_2"));
        btnEditProject_2->setGeometry(QRect(270, 590, 180, 40));
        btnEditProject_2->setFont(font8);
        btnEditProject_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        btnDeleteProject_2 = new QPushButton(groupBox_2);
        btnDeleteProject_2->setObjectName(QString::fromUtf8("btnDeleteProject_2"));
        btnDeleteProject_2->setGeometry(QRect(50, 650, 180, 40));
        btnDeleteProject_2->setFont(font8);
        btnDeleteProject_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;\n"
""));
        tcCEOProject = new QGroupBox(ceohomescreen);
        tcCEOProject->setObjectName(QString::fromUtf8("tcCEOProject"));
        tcCEOProject->setGeometry(QRect(-1, 170, 1531, 751));
        tcCEOProject->setStyleSheet(QString::fromUtf8("#tcCEOProject\n"
"{background-color: #1B2131;\n"
"border: #1B2131;}"));
        tabWidget = new QTabWidget(tcCEOProject);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 20, 1421, 701));
        tabWidget->setFont(font8);
        tbAssigedProjects = new QWidget();
        tbAssigedProjects->setObjectName(QString::fromUtf8("tbAssigedProjects"));
        tbAssigedProjects->setStyleSheet(QString::fromUtf8("#tbAssigedProjects{\n"
"background-color: #151925;\n"
"border: #1B2131;\n"
"color: #fff;\n"
"}"));
        btnStartProjcet = new QPushButton(tbAssigedProjects);
        btnStartProjcet->setObjectName(QString::fromUtf8("btnStartProjcet"));
        btnStartProjcet->setGeometry(QRect(1130, 590, 191, 41));
        btnStartProjcet->setFont(font8);
        btnStartProjcet->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        dgAssignedProjects = new QTableView(tbAssigedProjects);
        dgAssignedProjects->setObjectName(QString::fromUtf8("dgAssignedProjects"));
        dgAssignedProjects->setGeometry(QRect(0, 0, 1421, 551));
        dgAssignedProjects->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);\n"
"background-color:#1B2131;"));
        tabWidget->addTab(tbAssigedProjects, QString());
        tbCurrentProject = new QWidget();
        tbCurrentProject->setObjectName(QString::fromUtf8("tbCurrentProject"));
        btnCompleteProject = new QPushButton(tbCurrentProject);
        btnCompleteProject->setObjectName(QString::fromUtf8("btnCompleteProject"));
        btnCompleteProject->setGeometry(QRect(1130, 590, 191, 41));
        btnCompleteProject->setFont(font8);
        btnCompleteProject->setStyleSheet(QString::fromUtf8("border-radius:0px;\n"
"color: #EE5F8E;\n"
"border: 2px solid #EE5F8E;\n"
"background-color: transparent;"));
        dgCurrentProjects = new QTableView(tbCurrentProject);
        dgCurrentProjects->setObjectName(QString::fromUtf8("dgCurrentProjects"));
        dgCurrentProjects->setGeometry(QRect(0, 0, 1421, 551));
        dgCurrentProjects->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        tabWidget->addTab(tbCurrentProject, QString());
        tbCompletedProjects = new QWidget();
        tbCompletedProjects->setObjectName(QString::fromUtf8("tbCompletedProjects"));
        dgCompletedProjects = new QTableView(tbCompletedProjects);
        dgCompletedProjects->setObjectName(QString::fromUtf8("dgCompletedProjects"));
        dgCompletedProjects->setGeometry(QRect(0, 0, 1421, 591));
        dgCompletedProjects->setStyleSheet(QString::fromUtf8("color: rgb(208, 208, 208);"));
        tabWidget->addTab(tbCompletedProjects, QString());
        groupBox_3 = new QGroupBox(ceohomescreen);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 30, 1525, 71));
        groupBox_3->setStyleSheet(QString::fromUtf8("#groupBox_3\n"
"{\n"
"border: rgb(26, 31, 68); \n"
"border-bottom: 1px solid #878787;\n"
"border-top:1px solid #878787;\n"
"}\n"
""));
        button1 = new QPushButton(groupBox_3);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(1370, 10, 130, 55));
        button1->setFont(font5);
        button1->setStyleSheet(QString::fromUtf8("color: #fff;\n"
""));
        button1->setFlat(true);
        btnManageProjectsCEO = new QPushButton(groupBox_3);
        btnManageProjectsCEO->setObjectName(QString::fromUtf8("btnManageProjectsCEO"));
        btnManageProjectsCEO->setGeometry(QRect(1090, 10, 130, 55));
        btnManageProjectsCEO->setFont(font5);
        btnManageProjectsCEO->setStyleSheet(QString::fromUtf8("color: #fff;\n"
""));
        btnManageProjectsCEO->setFlat(true);
        btnManageEmpCEO = new QPushButton(groupBox_3);
        btnManageEmpCEO->setObjectName(QString::fromUtf8("btnManageEmpCEO"));
        btnManageEmpCEO->setGeometry(QRect(960, 10, 130, 55));
        btnManageEmpCEO->setFont(font5);
        btnManageEmpCEO->setStyleSheet(QString::fromUtf8("color: #fff;\n"
""));
        btnManageEmpCEO->setFlat(true);
        btnHomeCEO = new QPushButton(groupBox_3);
        btnHomeCEO->setObjectName(QString::fromUtf8("btnHomeCEO"));
        btnHomeCEO->setGeometry(QRect(830, 10, 130, 55));
        btnHomeCEO->setFont(font5);
        btnHomeCEO->setStyleSheet(QString::fromUtf8("color: #fff;\n"
""));
        btnHomeCEO->setFlat(true);
        btnManageProjects_2 = new QPushButton(groupBox_3);
        btnManageProjects_2->setObjectName(QString::fromUtf8("btnManageProjects_2"));
        btnManageProjects_2->setGeometry(QRect(1230, 10, 130, 55));
        btnManageProjects_2->setFont(font5);
        btnManageProjects_2->setStyleSheet(QString::fromUtf8("color: #fff;\n"
""));
        btnManageProjects_2->setFlat(true);
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(130, 10, 351, 51));
        QFont font10;
        font10.setFamily(QString::fromUtf8("HP Simplified"));
        font10.setPointSize(38);
        font10.setBold(false);
        font10.setWeight(50);
        label_16->setFont(font10);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        groupBox_3->raise();
        homeControlCEO->raise();
        usManageProjectControl->raise();
        ucManageEmployeeControl->raise();
        tcCEOProject->raise();

        retranslateUi(ceohomescreen);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ceohomescreen);
    } // setupUi

    void retranslateUi(QDialog *ceohomescreen)
    {
        ceohomescreen->setWindowTitle(QCoreApplication::translate("ceohomescreen", "WorkMate ", nullptr));
        homeControlCEO->setTitle(QString());
        label_4->setText(QCoreApplication::translate("ceohomescreen", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("ceohomescreen", "Not Started", nullptr));
        lblNotStartedCount_3->setText(QCoreApplication::translate("ceohomescreen", "5", nullptr));
        label_8->setText(QCoreApplication::translate("ceohomescreen", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("ceohomescreen", "In Progress", nullptr));
        lblInProgressCount_3->setText(QCoreApplication::translate("ceohomescreen", "5", nullptr));
        label_14->setText(QCoreApplication::translate("ceohomescreen", "Completed", nullptr));
        lblCompletedCount_3->setText(QCoreApplication::translate("ceohomescreen", "5", nullptr));
        lblNameHeader_3->setText(QCoreApplication::translate("ceohomescreen", "David Mosby", nullptr));
        lblRoleHeader_3->setText(QCoreApplication::translate("ceohomescreen", "Manager", nullptr));
        lblName_3->setText(QCoreApplication::translate("ceohomescreen", "David Mosby", nullptr));
        lblGender_3->setText(QCoreApplication::translate("ceohomescreen", "Male", nullptr));
        lblAddress_3->setText(QCoreApplication::translate("ceohomescreen", "Lacinia Road, Lacinia ", nullptr));
        lblDepartment_3->setText(QCoreApplication::translate("ceohomescreen", "Finance Department", nullptr));
        lblRole_3->setText(QCoreApplication::translate("ceohomescreen", "Manager", nullptr));
        lblUsername_3->setText(QCoreApplication::translate("ceohomescreen", "SandaruK", nullptr));
        label_15->setText(QCoreApplication::translate("ceohomescreen", "TextLabel", nullptr));
        pUserAvatar->setText(QCoreApplication::translate("ceohomescreen", "TextLabel", nullptr));
        ucManageEmployeeControl->setTitle(QString());
        groupBox->setTitle(QString());
        txtEmployeeName->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the name", nullptr));
        txtPassword->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the password", nullptr));
        cbUserRole->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Select user role", nullptr));
        cbDepartment->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Select the department", nullptr));
        cbGender->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Select the gender", nullptr));
        txtUsername->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the username", nullptr));
        txtAddress->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the address", nullptr));
        label_9->setText(QCoreApplication::translate("ceohomescreen", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("ceohomescreen", "Address", nullptr));
        label_5->setText(QCoreApplication::translate("ceohomescreen", "Department", nullptr));
        label_6->setText(QCoreApplication::translate("ceohomescreen", "User Role", nullptr));
        label_3->setText(QCoreApplication::translate("ceohomescreen", "Gender", nullptr));
        label_10->setText(QCoreApplication::translate("ceohomescreen", "Username", nullptr));
        label_11->setText(QCoreApplication::translate("ceohomescreen", "Full Name", nullptr));
        btnDeleteEmployee->setText(QCoreApplication::translate("ceohomescreen", "Delete", nullptr));
        btnAddEmployee->setText(QCoreApplication::translate("ceohomescreen", "Add", nullptr));
        btnEditEmployee->setText(QCoreApplication::translate("ceohomescreen", "Update", nullptr));
        usManageProjectControl->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_12->setText(QCoreApplication::translate("ceohomescreen", "Project Name", nullptr));
        label_18->setText(QCoreApplication::translate("ceohomescreen", "Starting Month", nullptr));
        label_19->setText(QCoreApplication::translate("ceohomescreen", "Description", nullptr));
        label_21->setText(QCoreApplication::translate("ceohomescreen", "Project Code", nullptr));
        txtProjectName->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the project name", nullptr));
        txtProjectCode->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the project code", nullptr));
        cbStartingMonth->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Select the month", nullptr));
        txtDescription->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Enter the description", nullptr));
        label_20->setText(QCoreApplication::translate("ceohomescreen", "Department", nullptr));
        cbDepartment_2->setPlaceholderText(QCoreApplication::translate("ceohomescreen", "Select the department", nullptr));
        btnAssignUser_2->setText(QCoreApplication::translate("ceohomescreen", "Assign User", nullptr));
        btnAddProject_2->setText(QCoreApplication::translate("ceohomescreen", "Add", nullptr));
        btnEditProject_2->setText(QCoreApplication::translate("ceohomescreen", "Update", nullptr));
        btnDeleteProject_2->setText(QCoreApplication::translate("ceohomescreen", "Delete", nullptr));
        tcCEOProject->setTitle(QString());
        btnStartProjcet->setText(QCoreApplication::translate("ceohomescreen", "Start Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbAssigedProjects), QCoreApplication::translate("ceohomescreen", "Assigned Projects", nullptr));
        btnCompleteProject->setText(QCoreApplication::translate("ceohomescreen", "Complete Project", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCurrentProject), QCoreApplication::translate("ceohomescreen", "Projects Inprogress", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tbCompletedProjects), QCoreApplication::translate("ceohomescreen", "Completed Projects", nullptr));
        groupBox_3->setTitle(QString());
        button1->setText(QCoreApplication::translate("ceohomescreen", "Log Out", nullptr));
        btnManageProjectsCEO->setText(QCoreApplication::translate("ceohomescreen", "Projects", nullptr));
        btnManageEmpCEO->setText(QCoreApplication::translate("ceohomescreen", "Employees", nullptr));
        btnHomeCEO->setText(QCoreApplication::translate("ceohomescreen", "Home", nullptr));
        btnManageProjects_2->setText(QCoreApplication::translate("ceohomescreen", "My Projects", nullptr));
        label_16->setText(QCoreApplication::translate("ceohomescreen", "WorkMate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ceohomescreen: public Ui_ceohomescreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CEOHOMESCREEN_H
