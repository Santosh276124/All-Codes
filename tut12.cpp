#include<iostream>
using namespace std;
int main(){
    
    // arrays example:
    int marks[] = {23, 45, 56 ,67};

// int mathmarks[4];
// mathmarks[0] = 334;
// mathmarks[1] = 434;
// mathmarks[2] = 534;
// mathmarks[3] = 634;

// cout<<"these are mathmarks"<<endl;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;

// cout<<"these are marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;


// *********** using for loop:


// for (int i = 0; i < 4; i++)
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
// }

// *********** using while loop:

// int i = 0;
// while (i<4)
// {
// cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;

// i++;


// }


// int i=0;
// do
// {
//     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//     i++;

// } while (i<4);

// ********* pointers and arrays:

int* p = marks;

// cout<<"the value of *p is "<<*p<<endl;
// cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"the value of *(p+3) is "<<*(p+3)<<endl;

cout<<*(p++)<<endl;
cout<<*(++p)<<endl;

    return 0;
}