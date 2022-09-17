#include<iostream>
using namespace std;

// int sum(int a, int b){
//   int c = a+b;
//   return c;

// }




// int main(){
    
//     int num1, num2;
//     cout<<"enter first number "<<endl;
//     cin>>num1;
//     cout<<"enter second number "<<endl;
//     cin>>num2;
    
// cout<<"the sum is "<<sum(num1 , num2);



//     return 0;
// }


int sum(int , int ) ;   //acceptable
//int sum(int a , int b ) ;   //acceptable
//int sum(int a , b ) ;   // Not acceptable

//void g(void);  // acceptable
void g();  // acceptable




int main(){
    
    int num1, num2;
    cout<<"enter first number "<<endl;
    cin>>num1;
    cout<<"enter second number "<<endl;
    cin>>num2;
    
cout<<"the sum is "<<sum(num1 , num2);

g();
    return 0;
    
}

int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2:
    int c = a+b;
    return c;
}

void g(){

    cout<<"\nHello , good morning.";
}