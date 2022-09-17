#include<iostream>
using namespace std;
int main(){
    
// check palindrome no.:

int n,num;
cout<<"enter the no.: "<<endl;
cin>>n;
num = n;
int rev = 0;
while(num!=0)
{
    int digit = num%10;
   rev = (rev*10) + digit;
   num = num/10;
}
cout << " the reverse of the number is "<< rev << endl;

if(rev == n)
   cout<<" the number is a palindrome.";
   else
   cout<<" the number is not a palindrome.";


    return 0;
}