#include<iostream>
using namespace std;





int main(){
    /*
int num = 5;

cout<<" address of num is " << &num<<endl;

int *ptr = &num;

double d = 4.3;
double *d2 = &d;


cout<<"address is " << ptr<<endl;
cout<<"value is " << *ptr<<endl;

cout<<"size of integer is "<< sizeof(num) <<endl;
cout<<"size of int pointer is "<< sizeof(ptr) <<endl;
cout<<"size of double pointer is "<< sizeof(d2) <<endl;



int i = 5;
int *p = 0;
p = &i;

cout<<p<<endl;
cout<<*p<<endl;
*/

int num = 5;
int *p = &num;

int a = num;
cout<<"before" << num<<endl;
a++;
cout<<"after" << num<<endl;

cout<<"before" << num<<endl;
(*p)++;
cout<<"after" << num<<endl;

// important arithmetic:

int i = 3;
int *t = &i;
cout<< ++(*t) <<endl;

cout << "before"<<t<<endl;
t = t+1;
cout << "after "<<t<<endl;


    return 0;
}