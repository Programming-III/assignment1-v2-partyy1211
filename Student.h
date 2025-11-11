#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
 class student{
       private:
     int yearLevel;
     string major;
     public:
     display();
     student(int yearLevel,  string major);
     ~student();
      int setyearLevel();
     string setmajor();
      int getyearLevel();
     string getmajor();
 }
 #endif
