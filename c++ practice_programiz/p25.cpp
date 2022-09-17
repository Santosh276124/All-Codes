#include<iostream>
using namespace std;
int main(){
    
// to check prime no:

int n;
cout <<"enter the value of n:"<<endl;
cin>>n;

bool isPrime = 1;

if(n == 0 || n == 1)
{
    isPrime = 0;
}

for(int i = 2; i < n; i++)
{
   if(n%i == 0)
   {
    isPrime = 0;
     break;
   }

}
if(isPrime == 1)
cout<<"prime";
else
cout<<"not prime";




    return 0;
}