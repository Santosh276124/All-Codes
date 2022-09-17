#include<iostream>
using namespace std;
int main(){
    
// to display prime no. between two no's:

int low , high ;
bool isPrime = 1;
cout<<"enter two numbers:"<<endl;
cin>>low >> high;

cout<<"prime numbers between " << low << " and " << high << " are: "<<endl;

while(low<high)
{
    isPrime = 1;
    if(low == 0 || low == 1)
{
    isPrime = 0;
}

for(int i = 2; i < low; i++)
{
   if(low%i == 0)
   {
    isPrime = 0;
     break;
   }

}

if(isPrime == 1){
cout<<low << " , ";
}

low++;

}


    return 0;
}