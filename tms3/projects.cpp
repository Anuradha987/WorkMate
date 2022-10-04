#include "projects.h"
#include <QMessageBox>
#include <iostream>
#include <string>
using namespace std;
#include "databaseconnection.h"


projects::projects()
{

}
const QString &projects::getProId() const
{
    return proId;
}

void projects::setProId(const QString &newProId)
{
    proId = newProId;
}

const QString &projects::getProjectName() const
{
    return projectName;
}

void projects::setProjectName(const QString &newProjectName)
{
    projectName = newProjectName;
}

const QString &projects::getProjectCode() const
{
    return projectCode;
}

void projects::setProjectCode(const QString &newProjectCode)
{
    projectCode = newProjectCode;
}

const QString &projects::getDescription() const
{
    return description;
}

void projects::setDescription(const QString &newDescription)
{
    description = newDescription;
}

const QString &projects::getStartingMonth() const
{
    return startingMonth;
}

void projects::setStartingMonth(const QString &newStartingMonth)
{
    startingMonth = newStartingMonth;
}

const QString &projects::getDepartment() const
{
    return department;
}

void projects::setDepartment(const QString &newDepartment)
{
    department = newDepartment;
}

const QString &projects::getDepartmentId() const
{
    return departmentId;
}

void projects::setDepartmentId(const QString &newDepartmentId)
{
    if(newDepartmentId == "Marketing"){
           departmentId = "1";
       }
       else if(newDepartmentId == "Accounting and Finance"){
               departmentId = "2";
       }
       else if(newDepartmentId == "Human Resource Management"){
               departmentId = "3";
       }
       else if(newDepartmentId == "Research and Development"){
               departmentId = "4";
       }
       else if(newDepartmentId == "IT and Equipment"){
               departmentId = "5";
       }
       else if(newDepartmentId == "Operational"){
               departmentId = "6";
       }
    //departmentId = newDepartmentId;
}

const QString &projects::getStatusId() const
{
    return statusId;
}

void projects::setStatusId(const QString &newStatusId)
{
    statusId = newStatusId;
}

const QString &projects::getAssignedUserId() const
{
    return assignedUserId;
}

void projects::setAssignedUserId(const QString &newAssignedUserId)
{
    assignedUserId = newAssignedUserId;
}

