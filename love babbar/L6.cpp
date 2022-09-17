#include<iostream>
#include<math.h>

using namespace std;
int main(){
    
// decimal to binary:
int i = 0;
int n ;
int ans = 0;
cout<<"enter the value of n"<<endl;
cin>>n;
// while(n!=0)
// {
//     int bit = (n&1);
//     ans = (bit*pow(10,i) + ans);
//     n  = n>>1;
//     i++;
// }
// cout<<ans<<endl;


// binary to decimal:

while(n!=0)
{
    int digit = n%10;
    if(digit == 1)
    {
        ans = ans + pow(2,i);
    }
        n = n/10;
        i++;
}
    cout<<ans<<endl;

    return 0;
}