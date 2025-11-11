#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
class person{
    display(){
        cout<<"name"<<end1;
         cout<<"id"<<end1;
    }
    person(string name,int id){
       this-> name=N;
        this-> id=ID;
    }
    person(string name,int id){
       this-> name=PARTY;
        this-> id=13005493;
    }
      ~person(){
          
      }
     string setname(){
         this->name=name;
     }
      int setid(){
          this->id=id;
      }
      string getname(){
        return name;
     }
      int getid(){
          return id;
      }
class person::student{
       display(){
           cout<<"yearLevel"<<end1;
         cout<<" major"<<end1;
       }
       student(int yearLevel,  string major){
            this-> yearLevel=YL;
             this-> major=M;
       }
        student(int yearLevel,  string major){
            this-> yearLevel=3;
             this-> major=CYBER_SECURITY;
       }
       ~student(){
           
       }
       int setyearLevel(){
            this->yearLevel=yearLevel;
       }
     string setmajor(){
          this->major=major;
     }
      int getyearLevel(){
          return yearLevel
      }
     string getmajor(){
         return major;
     }
}
class person::instructor{
    display(){
           cout<<"department"<<end1;
         cout<<" experianceYears"<<end1;
       }
       instuctor(string department,int experianceYears){
           this-> department=D;
             this-> experianceYears=EY;
       }
        instuctor(string department,int experianceYears){
           this-> department=CS;
             this-> experianceYears=5;
       }
        ~instuctor(){
            delete 
        }
         string setdepartment(){
              this->department=department;
         }
    int setexperianceYears(){
        this->experianceYears=experianceYears;
    }
     string getdepartment(){
          return department;
     }
    int getexperianceYears(){
        return experianceYears;
    }
}

}
class course{
     addstudent(const student& s){
          student s= new student;
     }
    dispalyCourseInfo(){
         cout<<"coursecode"<<end1;
         cout<<" coursename"<<end1;
          cout<<"currentstudent"<<end1;
           cout<<"maxstudents"<<end1;
    }
    course(string coursecode,string coursename,int maxstudents,int currentstudent,student*student){
             this-> coursename=CN;
             this-> coursecode=CC;
             this-> maxstudents=MS;
             this-> currentstudent=CS;
    }
     course(string coursecode,string coursename,int maxstudents,int currentstudent,student*student){
             this-> coursename=PROGRAMMINGIII;
             this-> coursecode=CSE1;
             this-> maxstudents=6000;
             this-> currentstudent=3555;
    }
     ~course(){
         
     }
     string setcoursecode(){
          this->coursecode=coursecode;
     }
    string setcoursename(){
        this->coursename=coursename;
    }
    int setcurrentstudent(){
         this->currentstudent=currentstudent;
    }
    int setmaxstudents(){
         this->maxstudents=maxstudents;
    }
    string getcoursecode(){
        return coursecode;
    }
      string getcoursename(){
           return coursename;
      }
       int getcurrentstudent(){
           return currentstudent;
       }
        int getmaxstudents(){
               return maxstudents;
        }
}
int main()
{
    course ("PROGRAMMINGIII","CSE1",6000,3555);
    person ("party","13005493");
    student (" CYBER_SECURITY",3);
    instuctor ("cs",3);
    display();
     student(int yearLevel,  string major);
     ~student();
      int setyearLevel();
     string setmajor();
      int getyearLevel();
     string getmajor();
     display();
     instuctor(string department,int experianceYears);
     ~instuctor();
      string setdepartment();
    int setexperianceYears();
     string getdepartment();
    int getexperianceYears();
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

    return 0;
}
