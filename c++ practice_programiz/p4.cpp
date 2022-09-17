#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;

    // ********** using if statement:

    cout<<" enter three numbers: ";
    cin>> n1 >> n2 >> n3;

    // if(n1>=n2 && n1>=n3)
    // cout<< " largest number is: "<< n1;

    // if(n2>=n1 && n2>=n3)
    // cout<< " largest number is: "<< n2;

    // if(n3>=n1 && n3>=n2)
    // cout<< " largest number is: "<< n3;


// ********** using if else statement:


    // if((n1>=n2) && (n1>=n3))
    // cout<< " largest number is: "<< n1;

    // else if((n2>=n1) && (n2>=n3))
    // cout<< " largest number is: "<< n2;

    // else
    // cout<< " largest number is: "<< n3;


// ********** nested if else statement:

    if(n1 >= n2){
        if(n1 >= n3)
           cout<< " largest number is: "<< n1;
       else
           cout<< " largest number is: "<< n3;
    }

    else {
           if(n2>=n3)

               cout<< " largest number is: "<< n2;

           else
                cout<< " largest number is: "<< n3;
    }






    return 0;
}