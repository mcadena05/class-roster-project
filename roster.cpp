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
        studentID = studentData.substr(0, delimiter);

        int start = delimiter + 1;
        delimiter = studentData.find(",", start);
        firstName = studentData.substr(start, delimiter - start);

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        lastName = studentData.substr(start, delimiter - start);

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        email = studentData.substr(start, delimiter - start);

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        age = stoi(studentData.substr(start, delimiter - start));

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        daysInCourse1 = stoi(studentData.substr(start, delimiter - start));

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        daysInCourse2 = stoi(studentData.substr(start, delimiter - start));

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        daysInCourse3 = stoi(studentData.substr(start, delimiter - start));

        start = delimiter + 1;
        delimiter = studentData.find(",", start);
        string degreeProgramString = studentData.substr(start, delimiter - start);

        if (degreeProgramString.compare("SOFTWARE") == 0)
        {
            degreeProgram = DegreeProgram::SOFTWARE;
        }
        else if (degreeProgramString.compare("SECURITY") == 0)
        {
            degreeProgram = DegreeProgram::SECURITY;
        }
        else if (degreeProgramString.compare("NETWORK") == 0)
        {
            degreeProgram = DegreeProgram::NETWORK;
        }
        else
        {
            cout << "Error: Invalid index or null pointer in classRosterArray" << std::endl;
        }
    }

    add(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

    return;
}

// adding each student object to classRoasterArray

void Roster::add(string studentID,
                 string firstName,
                 string lastName,
                 string email,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram degreeProgram)
{
    int daysInCourse[3] = {daysInCourse1, daysInCourse2, daysInCourse3};

    Student *newStudent = new Student();
    newStudent->setId(studentID);
    newStudent->setFirstName(firstName);
    newStudent->setLastName(lastName);
    newStudent->setEmail(email);
    newStudent->setAge(age);
    newStudent->setDaysInCourse(daysInCourse);
    newStudent->setDegreeProgram(degreeProgram);

    classRosterArray[lastIndex] = newStudent;

    // classRosterArray[classSize]->print();

    lastIndex++;

    return;
}

// removing a student by ID
void Roster::remove(string studentID)
{
    bool foundStudent = false;

    for (int i = 0; i < classSize; ++i)
    {

        if (classRosterArray[i]->getId() == studentID)
        {

            foundStudent = true;
            
            for (int j = i; j < classSize; ++j)
            {
                classRosterArray[j] = classRosterArray[j + 1];
            }

            classSize--;
            cout << "Student " << studentID << " has been removed" << endl;
        }
    }

    if (foundStudent == false)
    {
        cout << "Student " << studentID << " was not found" << endl;
    }

    return;
}

// printing all
void Roster::printAll()
{
    for (int i = 0; i < classSize; i++)
    {
        classRosterArray[i]->print();
    }

    return;
}

// printing average days in course by student ID
void Roster::printAverageDaysInCourse(string studentID)
{
    int average = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i]->getId() == studentID)
        {
            int daysInClass[3];
            classRosterArray[i]->getDaysInCourse(daysInClass);
            int total = daysInClass[0] + daysInClass[1] + daysInClass[2];
            average = total / 3;
            break;
        }     
          
    }

    cout << "Student " << studentID << " has an average of " << average << " days in course" << endl;

    return;
}

// printing invaild email if email doesnt meet requirements. A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
void Roster::printInvalidEmails()
{
    for (int i = 0; i < classSize; i++)
    {

        string testEmail = classRosterArray[i]->getEmail();

        if (testEmail.find("@") == string::npos || testEmail.find(" ") != string::npos || testEmail.find(".") == string::npos)
        {
            cout << testEmail << " is invalid" << endl;
        }
    }

    return;
}

// print by degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
    for (int i = 0; i < classSize; i++)
    {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram)
        {
            classRosterArray[i]->print();
        }
    }

    return;
}

// destructor to release the memory that was allocated dynamically in Roster
Roster::~Roster()
{
    for (int i = 0; i < classSize; i++)
    {
        delete classRosterArray[i];
    }

    return;
}
