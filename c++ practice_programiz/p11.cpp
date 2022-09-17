#include<iostream>
using namespace std;

////////****** HCF AND LCM /////////

int gcd(int a , int b)
{

    if(a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

int lcm(int a , int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a, b;
cout<< "enter two numbers:"<<endl;
cin>> a >> b;

cout<< "HCF is " << gcd(a,b)<<endl ;
cout<< "LCM is " << lcm(a,b) <<endl;



    return 0;
}