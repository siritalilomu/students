#include "Student.h"

Student::Student()
    : mStudentID( 453 ), mFirstName( "Siri" ), mLastName( "Tali" ) { }

// int getStudentID( ) const; Returns the current StudentID of the Student.
int Student::getStudentID( ) const {
    return mStudentID;
}
std::string Student::getFirstName( ) const {
    return mFirstName;
}
std::string Student::getLastName( ) const {
    return mLastName;
}

// void setStudentID( const int& studentID ); Change the studentID of the Student.
void Student::setStudentID( const int& studentID ) {
    mStudentID = studentID;
}