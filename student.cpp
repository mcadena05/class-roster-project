#include <iostream>
#include <string>
using namespace std;

#include "student.h"

// Parameter constructor
Student::Student(
    string studentID,
    string firstName,
    string lastName,
    string email,
    int age,
    int daysInCourse[3],
    DegreeProgram degreeProgram)
    : studentID(studentID),
      firstName(firstName),
      lastName(lastName),
      email(email),
      age(age),
      degreeProgram(degreeProgram)
{
   for (int i = 0; i < 3; ++i)
   {
      this->daysInCourse[i] = daysInCourse[i];
   }
}

// default constructor
Student::Student()
{
   studentID = "N/A";
   firstName = "N/A";
   lastName = "N/A";
   email = "N/A";
   age = 0;
   daysInCourse[0] = 0;
   daysInCourse[1] = 0;
   daysInCourse[2] = 0;
   degreeProgram;
}

// accessor or getters
string Student::getId()
{
   return studentID;
}

string Student::getFirstName()
{
   return firstName;
}

string Student::getLastName()
{
   return lastName;
}

string Student::getEmail()
{
   return email;
}

int Student::getAge()
{
   return age;
}

void Student::getDaysInCourse(int outDaysInCourse[3])
{
   for (int i = 0; i < 3; i++)
   {
      outDaysInCourse[i] = daysInCourse[i];
   }
}

DegreeProgram Student::getDegreeProgram()
{
   return degreeProgram;
}

// mutator or setters
void Student::setId(string Id)
{
   this->studentID = Id;
   // Data member      Parameter
}

void Student::setFirstName(string firstName)
{
   this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
   this->lastName = lastName;
}

void Student::setEmail(string email)
{
   this->email = email;
}

void Student::setAge(int age)
{
   this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[3])
{
   for (int i = 0; i < 3; i++)
   {
      this->daysInCourse[i] = daysInCourse[i];
   }
}

void Student::setDegreeProgram(DegreeProgram degreeProgram)
{
   this->degreeProgram = degreeProgram;
}

void Student::print()

{
   string degreeProgramString;
   switch (degreeProgram)
   {
   case (DegreeProgram::NETWORK):
      degreeProgramString = "Network";
      break;
   case (DegreeProgram::SECURITY):
      degreeProgramString = "Security";
      break;
   case (DegreeProgram::SOFTWARE):
      degreeProgramString = "Software";
      break;
   }

   cout << studentID << "\tFirst Name: " + firstName << "\tLast Name: " + lastName << "\tEmail: " + email << "\tAge: " << age << "\tdaysInCourse: {" << daysInCourse[0] << "," << daysInCourse[1] << "," << daysInCourse[2] << "}" << "\tDegree Program: " << degreeProgramString << endl;
}