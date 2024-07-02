#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {       
    public:            
        void SetId(int studentID); 
        void SetFirstName(string firstName);
        void SetLastName(string lastName);
        void SetEmail(string email);
        void SetAge(int age);
        void SetDaysInCourse(int daysInCourse[3]);
        void SetDegreeProgram(string degreeProgram); 

        int GetId ();
        string GetFirstName ();
        string GetLastName ();
        string GetEmail ();
        int GetAge ();
        int GetDaysInCourse ();
        string GetDegreeProgram ();
        void Print();

        Student(int studentID, string firstName, string lastName, string email,
        int age, int daysInCourse[3], string degreeProgram);
          
    private:
        int studentID;
        string firstName; 
        string lastName; 
        string email; 
        int age;
        int daysInCourse[3];
        string degreeProgram;

};

 #endif