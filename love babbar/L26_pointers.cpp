/*
#include<iostream>
using namespace std;
int main(){
  
int arr[10] = {23,122,41,67};
cout<<"address of first memory block is " << arr << endl;

cout<<"address of first memory block is " << &arr[0] << endl;

cout<<"4th " << *arr <<endl;
cout<<"5th " << *arr + 1 <<endl;
cout<<"6th " << *(arr + 1) <<endl;

int i = 3;
cout<< i[arr] << endl; // same as arr[i]

int *p = &arr[0];
cout<< p << endl;
cout<< *p << endl;

int temp[10];
cout<< sizeof(temp) << endl;

int *ptr = &temp[0];
cout<< sizeof(ptr) <<endl;
cout<< sizeof(&ptr) <<endl;
cout<< sizeof(*ptr) <<endl;

int arr[10];

// arr = arr + 1;

int arr[10];
int *ptr = &arr[0];
cout<< ptr <<endl;
ptr = ptr + 1;
cout<< ptr <<endl;



int arr[5] = {1,2,3,4,5};
char ch[6] = "abcde";

cout<< arr << endl;
cout<< ch << endl;

char *c = &ch[0];
cout<< c << endl;


    return 0;
}
*/

#include<iostream>
using namespace std;

void print(int *p)
{
cout<<p <<endl;
cout<< *p <<endl;

}

 void update(int *p)
{
    p = p+1;
    cout<< "inside" << p <<endl;
}


int main(){
    
int value = 5;
int *p = &value;
print(p);

cout<<"before" << p << endl;
update(p);

cout<<"after" << p << endl;



    return 0;
}