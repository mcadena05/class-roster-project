#include <iostream>
#include <string>
using namespace std;

#include "student.h"

// default constructor
Student::Student()
{
   this->studentID = "N/A";
   this->firstName = "N/A";
   this->lastName = "N/A";
   this->email = "N/A";
   this->age = 0;
   this->daysInCourse[0] = 0;
   this->daysInCourse[1] = 0;
   this->daysInCourse[2] = 0;
   this->degreeProgram;
}

// Parameter constructor
Student::Student(string studentID, string firstName, string lastName, string email,
                 int age, int daysInCourse[], DegreeProgram degreeProgram)
{
   this->studentID = studentID;
   // Data member      Parameter
   this->firstName = firstName;
   this->lastName = lastName;
   this->email = email;
   this->age = age;
   this->daysInCourse[0] = daysInCourse[0];
   this->daysInCourse[1] = daysInCourse[1];
   this->daysInCourse[2] = daysInCourse[2];
   this->degreeProgram = degreeProgram;
}

// mutator or setters
void Student::SetId(string studentID)
{
   this->studentID = studentID;
   // Data member      Parameter

   return;
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

void Student::SetDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3)
{
   // this->daysInCourse[3] = daysInCourse[3];

   for (int i = 0; i < 3; i++)
   {
      this->daysInCourse[0] = daysInCourse1;
      this->daysInCourse[1] = daysInCourse2;
      this->daysInCourse[2] = daysInCourse3;
   }
}

void Student::SetDegreeProgram(DegreeProgram degreeprogram)
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

int *Student::GetDaysInCourse()
{
   return daysInCourse;
}

DegreeProgram Student::GetDegreeProgram()
{
   return degreeProgram;
}

void Student::Print()
{
   cout << studentID << firstName << lastName << email << age << daysInCourse[3] << degreeProgram << endl;
}