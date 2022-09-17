#include<iostream>
using namespace std;

// this will not swap a and b:

void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}
//   call by reference using pointers:

void swapPointer(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

//   call by reference using c++ reference variables:

void swapReferenceVar(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}


int main(){
    
int a = 4, b = 5;

cout<<"the value of a is "<<a<< " and the value of b is "<<b<<endl;
// swap(a, b);  this will not swap:
// swapPointer(&a, &b);  this will swap a and b using pointer:

swapReferenceVar(a, b);  // this will swap a and b using reference variables:
cout<<"the value of a is "<<a<< " and the value of b is "<<b<<endl;





    return 0;
}