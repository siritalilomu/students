#include <string>
#include <iostream>
#include "Student.h"

int main( ) {
    std::cout << "Testing \n";
    Student student;
    int sid = student.getStudentID();
    std::string fname = student.getFirstName();
    std::string lname = student.getLastName();
    std::cout << "StudentID: " << sid << "\n";
    std::cout << "First Name: " << fname << "\n";
    std::cout << "Last Name: " << lname << "\n";
    return 0;
}