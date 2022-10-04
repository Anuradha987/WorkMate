#ifndef LOGIN_H
#define LOGIN_H
#include <iostream>
#include <string>
using namespace std;

#include <QMainWindow>
#include "ceohomescreen.h"
#include "managerhomescreen.h"
#include "employeehomescreen.h"
#include "databaseconnection.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

    static QString userId_;
    static int userrole_;

private slots:
    void on_btnLogin_clicked();
    void on_btnCancel_clicked();

private:
    Ui::login *ui;
    DatabaseConnection dbConnection;
    ceohomescreen *ceohomescreen_;
    managerhomescreen *managerhomescreen_;
    employeehomescreen *employeehomescreen_;

};
#endif // LOGIN_H
