#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
// *******power of a number

// float base, exponent, result ;

// cout<<"enter base and exponent respectively:";
// cin>> base >> exponent;

// result = pow(base , exponent);


// cout << base << "^" << exponent << "=" << result;

int exponent;
float base, result = 1;

cout<<"enter base and exponent respectively:";
cin>> base >> exponent;

while(exponent != 0){
    result = result*base;
    --exponent;
}

   cout << result;
    return 0;
}