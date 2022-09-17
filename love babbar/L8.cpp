#include<iostream>
using namespace std;
int main(){

    // switch case:

  /* int num = 1;
    switch(num)
    {
        case 1: cout<<"first"<<endl;
                break;

        case 2: cout<<"second"<<endl;
                 break;

        default: cout<<"default"<<endl;
       
    }
    */

     // switch case in infinite loop:
  /*   
    while (1)
    {

        int num = 1;
        switch(num)
    {
        case 1: cout<<"first"<<endl;
                break;

        case 2: cout<<"second"<<endl;
                 break;

        default: cout<<"default"<<endl;
       
    }
       
       exit(1);
    }
    
*/

//    simple calculator:
/*
int a , b;
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;

char op;
cout<<"enter the operation u want to perform"<<endl;
cin>>op;

switch(op)
{
    case '+': cout<<(a+b)<<endl;
    break;

    case '-': cout<<(a-b)<<endl;
    break;

    case '*': cout<<(a*b)<<endl;
    break;

    case '/': cout<<(a/b)<<endl;
    break;

    case '%': cout<<(a%b)<<endl;
    break;
}

*/
    
// to find no of notes in given amount:
/*
int amount = 1330;
int n1,n20,n50,n100;
n1 = n20 = n50 = n100 = 0;

switch(amount >= 100){

    case 1: n100 = amount/100;
            amount = amount - n100*100;
            break;
}
switch(amount >= 50){

    case 1: n50 = amount/50;
            amount = amount - n50*50;
            break;
}
switch(amount >= 20){

    case 1: n20 = amount/20;
            amount = amount - n20*20;
            break;
}
switch(amount >= 1){

    case 1: n1 = amount/1;
            amount = amount - n1*1;
            break;
}

cout<<" 100 rs = " << n100 << endl;
cout<<" 50 rs = " << n50 << endl;
cout<<" 20 rs = " << n20 << endl;
cout<<" 1 rs = " << n1 << endl;


*/



    return 0;
}