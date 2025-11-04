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

class Faculty : public Teacher{    //inheritance
   public :
   int registrationno;
   public :
    Faculty(string name,string subject, string department,int regno) {
      //accessing Both Class's members
      this->registrationno = regno;
      this->name = name;
      this->subject = subject;
      this->department = department;
   };
};

int main(){
   //Teacher class call
   /* Teacher t1;  //constructor call
    t1.name = "Zain";
    t1.subject = "OOP";
    t1.department = "CS";
   // t1.salary = "40,000";
   cout << "Name : "<< t1.name << endl;
   cout << "Subject : "<< t1.subject << endl ;
   cout << "Department : "<< t1.department << endl ; */
    //Faculty Class Call using Parameterized Constructor 
   Faculty f1("Zain","OOP","CS",3214);
   cout << "Faculty Details:"
   << "\n----------------"
   << "\nName: " << f1.name 
   << "\n | Subject: " << f1.subject 
   << "\n | Department: " << f1.department
   << "\n | Registration No: " << f1.registrationno << endl;


}
