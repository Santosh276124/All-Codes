#include<iostream>
using namespace std;
int main(){
    
    int low , high , num, result = 0 , remainder;
    cout<<"enter the numbers"<<endl;
    cin>>low >> high;

    num = low;

     while(num!=0)
{
    remainder = num % 10;
    result = result + (remainder*remainder*remainder);
    num = num/10;
}
if(result == low)
{
    cout<<low;
}

// else{
//      cout<<"no is not armstrong";
// }

    





    return 0;
}