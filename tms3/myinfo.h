#ifndef MYINFO_H
#define MYINFO_H
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"

class myInfo
{
public:
    myInfo();
    void GetUserById();
    void GetMyProjects();
    QString MyName ;
    QString myRole;
    QString myGender;
    QString myAddress;
    QString myDepartment;
    QString myUsername;
    DatabaseConnection dbConnection;
    QString inProgress, notStarted, Completed;
private:

};

#endif // MYINFO_H
