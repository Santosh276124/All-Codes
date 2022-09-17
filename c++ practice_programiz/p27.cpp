#include<iostream>
using namespace std;
int main(){
    
int n , num , remaider , result = 0;
cout<<"enter the number"<<endl;
cin>>n;
num = n;

while(num!=0)
{
    remaider = num % 10;
    result = result + (remaider*remaider*remaider);
    num = num/10;
}
if(result == n)
{
    cout<<"no is armstrong";
}
else{
     cout<<"no is not armstrong";
}




    return 0;
}