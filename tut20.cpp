#include<iostream>
#include<string>
using namespace std;

class Student{
   private: 
     int roll;
   public: 
     string name;
     int Class;
     void setData(int r);
     void getData(){
        cout<<"the name of the student is " <<name<<endl;
        cout<<"the roll no.  of the student is " <<roll<<endl;
        cout<<"the Class of the student is " <<Class<<endl;
     }
};

  void Student :: setData(int r){
       roll = r;
  }

int main(){
    
    Student santosh;
    santosh.name = "santosh";
    santosh.Class = 12;
    santosh.setData(58);
    santosh.getData();





    return 0;
}