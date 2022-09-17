#include<iostream>

// there are two types 
using namespace std;

int main(){
    int a=4,b=5;

cout<<"Operators in c++:"<<endl;
// arithmetic operators.

cout<<"the value of a+b is :"<<a+b<<endl;
cout<<"the value of a-b is :"<<a-b<<endl;
cout<<"the value of a*b is :"<<a*b<<endl;
cout<<"the value of a/b is :"<<a/b<<endl;
cout<<"the value of a%b is :"<<a%b<<endl;
cout<<"the value of a++ is :"<<a++<<endl; //first print then increment .
cout<<"the value of a--is :"<<a--<<endl;
cout<<"the value of ++ais :"<<++a<<endl;  //first increment then print.
cout<<"the value of --ais :"<<--a<<endl;

// assignment operators

// int a=3,b=5;
// char d='d';

// comparison operators.

cout<<endl;

cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;

cout<<endl;

// logical operators.


cout<<"the value of logical and operator is "<<((a==b) && (a<b))<<endl;
cout<<"the value of  logical or  operator is "<<((a==b) || (a<b))<<endl;
cout<<"the value of  logical not operator is "<<(!(a==b) )<<endl;





    return 0;
}