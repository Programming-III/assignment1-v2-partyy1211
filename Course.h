#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class course{
    private:
    string coursecode;
    string coursename;
    student*student;
    int currentstudent;
    int maxstudents;
    public:
    addstudent(const student& s);
    dispalyCourseInfo();
    course(string coursecode,string coursename,int maxstudents,int currentstudent,student*student);
    ~course();
     string setcoursecode();
      string setcoursename();
       int setcurrentstudent();
        int setmaxstudents();
        string getcoursecode();
      string getcoursename();
       int getcurrentstudent();
        int getmaxstudents();
}
#endif
