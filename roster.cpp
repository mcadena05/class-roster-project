#include <iostream>
// #include <sstream>
#include "roster.h"
#include "degree.h"
#include "student.h"
#include "student.cpp"

using namespace std;

int main()
{
    // array of 5 pointers pointing to each Student object
    Student* classRosterArray[5];

    for (int i = 0; i < 5; i++){
        classRosterArray[i] = new Student();
    }
    
    
    return 0;
}
