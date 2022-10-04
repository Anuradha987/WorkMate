#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <iostream>
#include <string>
using namespace std;

#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <QFileInfo>

class DatabaseConnection
{
public:
    QSqlDatabase db;

    void CloseConnection(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool OpenConnection(){

        db=QSqlDatabase::addDatabase("QSQLITE");
//        db.setHostName("127.0.0.1");
//        db.setUserName("root");
//        db.setPassword("");
        db.setDatabaseName("C:/Users/Anuradha Algama/Documents/QT Projects/SAANAlgama_10707127_SOFT336SL/projectmanagementsystem.db");  //Give the Database path here

        if(db.open()){
          qDebug()<<("Database connection is success!");
          return true;
        }
        else{
            qDebug()<<("Failed to connect the database!");
            return false;
        }
    }

public:
    DatabaseConnection();
};

#endif // DATABASECONNECTION_H
