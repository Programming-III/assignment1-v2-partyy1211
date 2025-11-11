#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class person{
    private:
   string name;
   int id;
   
   public:
   display();
   person(string name,int id);
  ~person();
  string setname();
   int setid();
    string getname();
   int getid();
}
 #endif

