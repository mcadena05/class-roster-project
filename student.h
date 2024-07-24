#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

#include "degree.h"

class Student
{
public:
    void SetId(string studentID);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmail(string email);
    void SetAge(int age);
    void SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void SetDegreeProgram(DegreeProgram degreeProgram);

    string GetId();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    int GetAge();
    int *GetDaysInCourse();
    DegreeProgram GetDegreeProgram();
    void Print();

    Student();

    Student(string studentID, string firstName, string lastName, string email,
            int age, int daysInCourse[], DegreeProgram degreeProgram);

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
};

#endif