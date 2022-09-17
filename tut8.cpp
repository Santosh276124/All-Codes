#include<iostream>
using namespace std;

int main(){

int age;
cout<<"tell me your age"<<endl;
cin>>age;
// if((age<18) && (age>0)){
//     cout<<"you can not come to my party"<<endl;
// }
// else if(age==18){
//     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
// }
// else if(age<1){
//     cout<<"you are not yet born"<<endl;

// }
// else{
//     cout<<"you can come to the party"<<endl;
// }

// ***********switch case statement:

switch (age)
{
case 18:
   
   cout<<"youn are 18"<<endl;
    break;
case 22:
   
   cout<<"youn are 22"<<endl;
    break;

   case 2:
   
   cout<<"youn are 2"<<endl;
    break;

default:
cout<<"no special cases"<<endl;

    break;
}

cout<<"done with switch case";




    return 0;
}