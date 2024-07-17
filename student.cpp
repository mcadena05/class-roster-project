#include <iostream>
#include <string>
using namespace std;

#include "student.h"

// default constructor
Student::Student(){
   this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	this->daysInCourse[0] = 0;
		this->degreeProgram;
}

// Parameter constructor 
Student::Student(string studentID, string firstName, string lastName, string email,
                 int age, int daysInCourse[3], string degreeProgram)
{
   this->studentID = studentID;
   this->firstName = firstName;
   this->lastName = lastName;
   this->email = email;
   this->age = age;
   this->daysInCourse[3] = daysInCourse[3];
   this->degreeProgram = degreeProgram;
}

// mutator or setters
void Student::SetId(string studentID)
{
   this->studentID = studentID;
}

void Student::SetFirstName(string firstName)
{
   this->firstName = firstName;
}

void Student::SetLastName(string lastName)
{
   this->lastName = lastName;
}

void Student::SetEmail(string email)
{
   this->email = email;
}

void Student::SetAge(int age)
{
   this->age = age;
}

void Student::SetDaysInCourse(int daysInCourse[3])
{
   this->daysInCourse[3] = daysInCourse[3];
}

void Student::SetDegreeProgram(string degreeProgram)
{
   this->degreeProgram = degreeProgram;
}

// accessor or getters

string Student::GetId()
{
   return studentID;
}

string Student::GetFirstName()
{
   return firstName;
}

string Student::GetLastName()
{
   return lastName;
}

string Student::GetEmail()
{
   return email;
}

int Student::GetAge()
{
   return age;
}

int Student::GetDaysInCourse()
{
   return daysInCourse[3];
}

string Student::GetDegreeProgram()
{
   return degreeProgram;
}

void Student::Print()
{
   cout << studentID << firstName << lastName << email << age << daysInCourse[3] << degreeProgram << endl;
}