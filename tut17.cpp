#include<iostream>
using namespace std;



// factorial***


int factorial(int n){
   if(n<=1){
    return 1;
   }
return n * factorial(n - 1);   //  n! = n * (n-1)!.
}


// **********  fibonacci sequence:

int fib(int n){
   if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

   
    return fib(n-2)+ fib(n-1);
}

int main(){
    int a;
cout<<"enter the number"<<endl;
cin>>a;
// cout<<"factorial of " <<num<< " is : " << factorial(num)<<endl;
cout<<"the term in fibonacci sequence at position  " <<a<< " is : " << fib(a)<<endl;



    return 0;
}