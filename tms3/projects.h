#ifndef PROJECTS_H
#define PROJECTS_H
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"

class projects
{
public:
    projects();


    const QString &getProId() const;
    void setProId(const QString &newProId);
    const QString &getProjectName() const;
    void setProjectName(const QString &newProjectName);
    const QString &getProjectCode() const;
    void setProjectCode(const QString &newProjectCode);
    const QString &getDescription() const;
    void setDescription(const QString &newDescription);
    const QString &getStartingMonth() const;
    void setStartingMonth(const QString &newStartingMonth);
    const QString &getDepartment() const;
    void setDepartment(const QString &newDepartment);
    const QString &getDepartmentId() const;
    void setDepartmentId(const QString &newDepartmentId);
    const QString &getStatusId() const;
    void setStatusId(const QString &newStatusId);
    const QString &getAssignedUserId() const;
    void setAssignedUserId(const QString &newAssignedUserId);

    DatabaseConnection dbConnection;

    QString inProgrees = "1", Started = "2", Completed = "3";

private:
    QString proId;
    QString projectName;
    QString projectCode;
    QString description;
    QString startingMonth;
    QString department;
    QString departmentId;
    QString statusId;
    QString assignedUserId;
};

#endif // PROJECTS_H
