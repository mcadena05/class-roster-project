#include <iostream>
#include <string>
using namespace std;
#include "student.h"
#include "degree.h"


class Roster{
    public:
        // array of 5 pointers pointing to each Student object
        Student* classRosterArray[5];

        Roster(int classSize);
        string GetStudentID(int index);

        void parseStudents(string studentData);
        void add(string studentID, string firstName, string lastName, string email, int age, int daysCourse1, 
                int daysCourse2, int daysCourse3, DegreeProgram degreeProgram);
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        void printByDegreeProgram(DegreeProgram degreeProgram);

        int classSize;
        int lastIndex;
        
        ~Roster();

    

    
};

