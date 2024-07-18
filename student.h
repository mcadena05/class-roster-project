#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    void SetId(string studentID);
    void SetFirstName(string firstName);
    void SetLastName(string lastName);
    void SetEmail(string email);
    void SetAge(int age);
    void SetDaysInCourse(int daysCourse1, int daysCourse2, int daysCourse3);
    void SetDegreeProgram(string degreeProgram);

    string GetId();
    string GetFirstName();
    string GetLastName();
    string GetEmail();
    int GetAge();
    int GetDaysInCourse();
    string GetDegreeProgram();
    void Print();

    Student();

    Student(string studentID, string firstName, string lastName, string email,
            int age, int daysInCourse[], string degreeProgram);

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    string degreeProgram;
};

#endif