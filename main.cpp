#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"
using namespace std;

int main()
{
    // Print out to the screen my student info
    cout << "Course Title: C867 - Scripting and Programming - Applications " << endl;
    cout << "Programming Language - C++ " << endl;
    cout << "WGU Student ID - 012023698 " << endl;
    cout << "Student Name - Marlynn Garcia " << endl;

    // Instance of the Roster class called classRoster
    Roster classRoster;

    // studentData Table
    const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
         "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
         "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
         "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
         "A5,Marlynn,Garcia,mcade18@wgu.edu,28,5,25,30,SOFTWARE"};


    classRoster.printAll();

    classRoster.printInvalidEmails();

    for (int i = 0; i < classSize; i++){
        classRoster.printAverageDaysInCourse(studentID);
    }
}