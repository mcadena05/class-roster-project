#include <iostream>
#include <string>
using namespace std;
#include "roster.h"


void Roster::parseStudents(string studentData){
    
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
    string age = studentData.substr(start, delimiter - start);

    int start = delimiter + 1;
    delimiter = studentData.find(",", start);
    string daysCourse1 = studentData.substr(start, delimiter - start);

    int start = delimiter + 1;
    delimiter = studentData.find(",", start);
    string daysCourse2 = studentData.substr(start, delimiter - start);

    int start = delimiter + 1;
    delimiter = studentData.find(",", start);
    string daysCourse3 = studentData.substr(start, delimiter - start);

    int start = delimiter + 1;
    delimiter = studentData.find(",", start);
    string degree = studentData.substr(start, delimiter - start);

    DegreeProgram degreeProgram;
    if (degree == "SOFTWARE") {
        degreeProgram = SOFTWARE;
    } else if (degree == "SECURITY") {
        degreeProgram = SECURITY;
    } else if (degree == "NETWORK") {
        degreeProgram = NETWORK;
    } else {
        cout << "Degree not included"; 
    }

    // Add(studentID, firstName, lastName, email, age, daysCourse1, daysCourse2, daysCourse3, degreeProgram);
}

