#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class instuctor {
   private:
    string department;
    int experianceYears;
    public :
     display();
     instuctor(string department,int experianceYears);
     ~instuctor();
      string setdepartment();
    int setexperianceYears();
     string getdepartment();
    int getexperianceYears();
}
 #endif
