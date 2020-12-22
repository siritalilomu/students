#ifndef _Student_H_
#define _Student_H_
#include <cstdlib>
#include <string>

class Student {
    public:
        Student();
        int getStudentID( ) const;
        std::string getFirstName( ) const;
        std::string getLastName( ) const;

        void setStudentID( const int& mStudentID );
        void setFirstName( const std::string& mFirstName );
        void setLastName( const std::string& mLastName );

    private:
        int mStudentID;
        std::string mFirstName;
        std::string mLastName;

};

#endif
