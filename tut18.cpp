#include<iostream>
using namespace std;


int sum(int a, int b){
    cout<<"using function with 2 arguments is "<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"using function with 3 arguments is "<<endl;
    return a+b+c;
}

// volume of cylinder:
int volume(double r, double h){
    return (3.14*r*r*h);
}



int main(){
      
  cout<<"the sum of 3 and 6 " <<sum(3,6)<<endl;
  cout<<"the sum of 3 7 and 6 " <<sum(3,6,7)<<endl;

  cout<<"volume of cylinder with radius 5 and height 3 is "<<volume(5,3)<<endl;






    return 0;
}