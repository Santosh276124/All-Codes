#include<iostream>
using namespace std;

// base class:
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;

    }
    Employee() {}
};
/*
class {{derived-class-name}} : {{visibility mode}} {{base-class-name}}
{
    class members/methods.....
}
note:
1. default visibility mode is private
2. public visibility mode: public members of the base class becomes public members of the derived class
3. private visibility mode: public members of the base class becomes private members of the derived class
4. private members are never inherited
*/

//creating a programmer classs derived from employee base class:
class Programmer : public Employee
{
    public:
      int languageCode;
      Programmer(int inpId)
      {
        id = inpId;
        languageCode = 9;

      }
      void getData()
      {
        cout<<id<<endl;

      }
};



int  main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

Programmer skillF(10);
cout<<skillF.languageCode<<endl;
cout<<skillF.id<<endl;
skillF.getData();

    return 0;
}