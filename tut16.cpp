#include<iostream>
using namespace std;

inline int product(int a, int b){

    // static int c = 0;    this executes only once :
    // c = c + 1;           next time function run , the value of c will be retained:
    // return a*b +c;


     return a*b;
}

//    ****** default arguments.....

int moneyReceived( int currentMoney, float factor = 1.04){  // given value is default argument:
     return currentMoney * factor;
}

// int strlen(const char *p){      **********constant argument:

// }

int main(){
    // int a, b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;
    // cout<<"the product of a and b is "<<product(a,b)<<endl;

int money = 100000;
cout<<"if u have "<<money<<" Rs in your bank account , u will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
cout<<" for vip: if u have "<<money<<" Rs in your bank account , u will receive "<<moneyReceived(money, 1.1)<<" Rs after 1 year"<<endl;


    return 0;
}