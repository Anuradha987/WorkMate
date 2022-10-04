#include "login.h"
#include "ui_login.h"
#include "ceohomescreen.h"
#include "managerhomescreen.h"
#include "employeehomescreen.h"
#include <QMessageBox>
#include "databaseconnection.h"
#include <iostream>
#include <string>
using namespace std;
#include <QPixmap>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Anuradha Algama/Documents/QT Projects/tms3Pics/Picture3.png");   // enter the image path of "Picture3.png" here
    int w =ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


    ui->label->setPixmap(pix);

}

login::~login()
{
    delete ui;
}

//static QString userId ;
//static int userrole ;
 QString login::userId_;
 int login::userrole_;

void login::on_btnLogin_clicked()
{

    QString username, password;

    username = ui->txtUsername->text();
    //password = ui->txtPassword->text();
    //password encryption
    password = QString(QCryptographicHash::hash((ui->txtPassword->text()).toLocal8Bit(),QCryptographicHash::Md5));
    dbConnection.OpenConnection();


    QSqlQuery qry;
    qry.prepare("SELECT username, password, id, fkUserRole AS 'userroleId' FROM user WHERE Username = '"+username+"' AND Password = '"+password+"' ");

    if(qry.exec())
    {
        int count = 0;
        while(qry.next()){
            count++;

        if(count==1){
//                       static QString userId = qry.value(2).toString();
//                       static int userrole = qry.value(3).toInt();

            userId_ = qry.value(2).toString();
            userrole_ = qry.value(3).toInt();

//user redirection based on the userrole
                switch (userrole_)
                {
                case 1:
                    this->hide();
                    ceohomescreen_ = new ceohomescreen(this);
                    ceohomescreen_->show();
                    break;
                case 2:
                    this->hide();
                    managerhomescreen_ = new managerhomescreen(this);
                    managerhomescreen_->show();
                    break;
                case 3:
                    this->hide();
                    employeehomescreen_ = new employeehomescreen(this);
                    employeehomescreen_->show();
                    break;
                }

            dbConnection.CloseConnection();

        }}
        if(count>1){
            QMessageBox:: information(this, "Login info", "Username and Password duplicated");
        }
        if(count<1){
            QMessageBox:: information(this, "Login info", "Incorrect Username or Password");
        }
    }
}


void login::on_btnCancel_clicked()
{
    qApp->quit();
}

