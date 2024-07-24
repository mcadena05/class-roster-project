#include <iostream>
#include <string>
using namespace std;
#include "roster.h"
#include "student.h"
#include "degree.h"

// parsing student data table
void Roster::parseStudents(string studentData)
{

    string studentID, firstName, lastName, email;
    int age, daysInCourse1, daysInCourse2, daysInCourse3;
    DegreeProgram degreeProgram;

    if (lastIndex < classSize)
    {

        int delimiter = studentData.find(",");
        string studentID = studentData.substr(0, delimiter);

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        string firstName = studentData.substr(start, delimiter - start);

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        string lastName = studentData.substr(start, delimiter - start);

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        string email = studentData.substr(start, delimiter - start);

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        int age = stoi(studentData.substr(start, delimiter - start));

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        int daysCourse1 = stoi(studentData.substr(start, delimiter - start));

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        int daysCourse2 = stoi(studentData.substr(start, delimiter - start));

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        int daysCourse3 = stoi(studentData.substr(start, delimiter - start));

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        string degree = studentData.substr(start, delimiter - start);

        // if (degree == "SOFTWARE")
        // {
        //     classRosterArray[ind]->SetDegreeProgram(SOFTWARE);
        // }
        // else if (degree == "SECURITY")
        // {
        //     classRosterArray[ind]->SetDegreeProgram(SECURITY);
        // }
        // else if (degree == "NETWORK")
        // {
        //     classRosterArray[ind]->SetDegreeProgram(NETWORK);
        // }
        // else
        // {
        //     cout << "Degree not included";
        // }

        lastIndex++;
    }

    add(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

    return;
}

// adding each student object to classRoasterArray

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1,
                 int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};

    classRosterArray[classSize] = new Student(studentID, firstName, lastName, email, age, daysInCourse, degreeProgram);

    return;
}

void Roster::remove(string studentId)
{
    bool foundStudent = false;

    for (int i = 0; i < lastIndex; ++i)
    {

        if (classRosterArray[i]->GetId() == studentId)
        {

            foundStudent = true;
            int j = i;

            for (j = i; j < lastIndex; ++j)
            {
                classRosterArray[j] = classRosterArray[j + 1];
            }

            lastIndex--;
            cout << "Student " << studentId << " has been removed" << endl;
        }
    }

    if (foundStudent == false)
    {
        cout << "This Student ID was not found." << endl;
    }
}

void Roster::printAll()
{
    for (int i = 0; i < classSize; i++)
    {
        classRosterArray[i]->Print();
    }
}

