#include<iostream>
#include<conio.h>
using namespace std;

class Personify 
{
    private :
    int age = 22;
    string skincolour = "light";
    public :
    string name = "M.Sameer";
    string semester = "2nd";
    string Dep = "Software Engineering";
    
    void printing()
    {
        cout<<"Your name is : " << name << ", You're in "<< semester << " semester"<< ", your department is : "<< Dep;
    }
};
class Future : public Personify
{
    public:
    string Field = "Software";

    void printing()
    {
        cout<<"Your name is : " << name << ", You're in "<< semester << " semester"<< ", your department is : "<< Dep<<", Your Field is : "<< Field;
    }

};
int main()
{
    Future obj;
    obj.printing();

    getch();
}