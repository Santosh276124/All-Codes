#include<iostream>
using namespace std;


 int factorial(int n){
    if(n <= 1) {
        return 1;
    }
   
    
   else
   return n * factorial(n - 1);
   
 }


int main(){
    
int num;
// long double factorial = 1.0;

cout<<"enter a positive integer:";
cin>>num;

if(num<0){
    cout<<"error! factorial of negative no. does not exist";
}
// }
//   else{
//     for ( int i = 1; i <= n; ++i)
//     {
//        factorial *= i;
//     }

    cout << "factorial of "<<num<<   " = " << factorial(num);
//   }




    return 0;
}