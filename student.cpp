#include <iostream>
#include <string>
using namespace std;

#include "student.h"

Student::Student(int studentID, string firstName, string lastName, string email,
        int age, int daysInCourse[3], string degreeProgram) {
        studentID = studentID;
        firstName = firstName; 
        lastName = lastName;
        email = email;
        age = age; 
        daysInCourse[3] = daysInCourse[3]; 
        degreeProgram = degreeProgram;
        }

void Student::SetId(int studentID) {
    studentID = studentID;
}

void Student::SetFirstName(string firstName) {
    firstName = firstName;
}

void Student::SetLastName(string lastName) {
    lastName = lastName;
}

void Student::SetEmail(string email) {
    email = email;
}

void Student::SetAge(int age) {
    age = age;
}

void Student::SetDaysInCourse(int daysInCourse[3]) {
    daysInCourse[3] = daysInCourse[3];
}

void Student::SetDegreeProgram(string degreeProgram) {
    degreeProgram = degreeProgram;
}

int Student::GetId() {
   return studentID;
}

string Student::GetFirstName() {
   return firstName;
}

string Student::GetLastName() {
   return lastName;
}

string Student::GetEmail() {
   return email;
}

int Student::GetAge() {
   return age;
}

int Student::GetDaysInCourse() {
   return daysInCourse[3];
}

string Student::GetDegreeProgram() {
   return degreeProgram;
}

void Student::Print() {
   cout << studentID << firstName << lastName << email << age << daysInCourse[3] << degreeProgram << endl;
}