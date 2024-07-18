#include <iostream>
#include <string>
using namespace std;
#include "student.h"
#ifndef roster_h
#define roster_h

class Roster{
    public:
        // array of 5 pointers pointing to each Student object
        Student* classRosterArray[5];

        void parseStudentData(string studentData);
        void add(string studentID, string firstName, string lastName, string email, int age, int daysCourse1, 
                int daysCourse2, int daysCourse3, DegreeProgram degreeProgram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

        ~Roster();

    private:
        int lastIndex = -1;

    
};

#endif