#include "myinfo.h"
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "login.h"
#include "databaseconnection.h"

myInfo::myInfo()
{

}

myInfo myinfo;

void  myInfo::GetUserById(){
    login login_;
    QString logId = login_.userId_;

    dbConnection.OpenConnection();

    QSqlQuery qry;
    qry.prepare("Select Id, Name, Address, Gender, (SELECT DepartmentName FROM department WHERE id = fkDepartmentId), (SELECT UserRole FROM userrole WHERE id = fkUserRole), Username from user WHERE Id ='"+logId+"' ");

    if(qry.exec())
    {
        while (qry.next()) {

            MyName = qry.value(1).toString();
            myRole = qry.value(5).toString();
            MyName = qry.value(1).toString();
            myGender = qry.value(3).toString();
            myAddress = qry.value(2).toString();
            myDepartment = qry.value(4).toString();
            myRole = qry.value(5).toString();
            myUsername = qry.value(6).toString();
            qDebug()<< ("Retrived user info of "+MyName);
        }
        dbConnection.CloseConnection();
    }
    else{
        qDebug()<< ("Couldn't retrive user info");
    }
}

void myInfo::GetMyProjects(){
    login login_;
    QString logId = login_.userId_;

    dbConnection.OpenConnection();

    QSqlQuery qry1, qry2, qry3;
    qry1.prepare("SELECT COUNT(Id) FROM project WHERE fkAssignedUser = '"+logId+"' AND fkStatus = 1 ");
    qry2.prepare("SELECT COUNT(Id) FROM project WHERE fkAssignedUser = '"+logId+"' AND fkStatus = 2 ");
    qry3.prepare("SELECT COUNT(Id) FROM project WHERE fkAssignedUser = '"+logId+"' AND fkStatus = 3 ");

    if(qry1.exec() && qry2.exec() && qry3.exec())
    {
        while (qry1.next()&& qry2.next() && qry3.next()) {
            inProgress = qry1.value(0).toString();
            notStarted = qry2.value(0).toString();
            Completed = qry3.value(0).toString();
        }
        dbConnection.CloseConnection();
    }
    else{
        qDebug()<< ("Couldn't retrive user info");
    }
}
