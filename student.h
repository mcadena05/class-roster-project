#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

#include "degree.h"

class Student
{
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
    // default constructor
    Student();

    Student(
        string studentID,
        string firstName,
        string lastName,
        string email,
        int age,
        int daysInCourse[3],
        DegreeProgram degreeProgram);

    string getId();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    void getDaysInCourse(int outDaysInCourse[3]);
    DegreeProgram getDegreeProgram();
    void print();

    void setId(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int daysinCourse[3]);
    void setDegreeProgram(DegreeProgram degreeProgram);
};

#endif