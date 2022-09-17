/*
#include<iostream>
using namespace std;
#define PI 3.14
int main(){
    
    int r = 5;
    double area = PI * r * r;
    cout<< area<<endl;

    return 0;
}


// Global variable::::::::

#include<iostream>
using namespace std;

int i = 15;

void a(int i)
{
    cout << i << " in a"<<endl;
}
void b(int i)
{
    cout << i << " in b"<<endl;
}

int main(){
    
    int j = 5;

cout<< i <<" in main"<<endl;

a(i);
b(i);

    return 0;
}


#include<iostream>
using namespace std;

inline int getMax(int& a, int& b)
{
    return (a>b) ? a : b;
}
int main(){
    
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a,b);
    cout<<ans<<endl;

    a = a+3;
    b = b+1;
     ans = getMax(a,b);
    cout<<ans<<endl;
      return 0;
}

*/
// Default argument:::::::::

#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{
    for(int i = start; i < n; i++)
    {
        cout<< arr[i] << endl;
    }
}
int main(){
    
int arr[5] = {1,4,7,8,9};
int size = 5;

print(arr,size);
cout<<endl;

print(arr,size,2);


    return 0;
}

  