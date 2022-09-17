#include<iostream>
using namespace std;

/*
void printArray(int arr[] , int size)
{
for(int i = 0; i < size; i++)
{
    cout << arr[i] << " " ;
}
}

*/

// int main(){
    
/*

//declare
int number[15];
//accessing an array:
// cout<<"value at 15 index " << number[14] << endl;
// cout<<"value at 20 index " << number[20] << endl;

// initializing an array:
int second[3] = {5,7,11};
//accessing an array:
// cout<<"value at 2 index " << second[2] << endl;

int third[15] = {2,7};

int n = 15;

for(int i = 0; i < n; i++)
{
    cout<< third[i] << " " ;
}

cout << endl;

int fourth[10] = {1};
 int m = 10;

printArray(fourth , 10);

cout<<endl;

int fourthSize = sizeof(fourth)/sizeof(int);
cout<<"size of fourth is :" << fourthSize << endl;

char ch[5] = { 'a','b','c','d','e'};
for(int i = 0; i < 5; i++)
{
    cout<<ch[i] << " " ;
}


cout<< endl << " everything is fine " << endl;

*/


// greatest and smallest element of array:

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        if(num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        maxi = max(maxi , num[i]);  // alternate method.
    }
    return maxi;
}
// int getMax(int num[], int n)
// {
//     int max = INT_MIN;
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     return max;
// }

int main(){


int size;
cin >> size;

int num[100];

for(int i = 0; i < size; i++)
{
    cin>> num[i];
}

cout<<"maximum value is : " << getMax(num , size) << endl;
cout<<"minimum value is : " << getMin(num , size) << endl;






    return 0;
}