#include<iostream>
using namespace std;
int main(){
    
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
int count = 1;
int row = 1;
while(row <= n)
{
    // int space = n - row;
    // while(space)
    // {
    //     cout<<" ";
    //     space = space - 1;
    // }

int col = 1;

// int value = row;
while(col <= row)
{
    cout<<count<<" ";
    // num = (num*(row - col))/(col + 1);
    col = col + 1;
    count = count + 1;


}

// int j = 1;
// // int start = (row - 1) *2;
// while(j <= n - row)
// {
//     cout<<"*";
//     j = j+1;
//     // start = start - 1;

// }


cout<<endl;
row = row + 1;
}



    return 0;
}