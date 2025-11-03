#include <iostream>
#include <string>
using namespace std;

// class (oop in Cpp)
class Teacher {    
   private :      //access specifier - if private then the data won't be showed in output or even accesed outside
   double salary;   // if to access we can use functions
   public :
   string name;
   string subject;
   string department;
};  //data inside class is known as encapsulation

int main(){
    Teacher t1;  //constructor call
    t1.name = "Zain";
    t1.subject = "OOP";
    t1.department = "CS";
   // t1.salary = "40,000";
   cout << "Name : "<< t1.name << endl;
   cout << "Subject : "<< t1.subject << endl ;
   cout << "Department : "<< t1.department << endl ;

}