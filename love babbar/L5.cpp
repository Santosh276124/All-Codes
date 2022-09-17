#include<iostream>
using namespace std;
int main(){
//     int a =4;
//     int b = 6;

//     cout<<"a|b is "<<(a|b)<<endl;
//     cout<<"a&b is "<<(a&b)<<endl;
//     cout<<"~a is "<<~a<<endl;
//     cout<<"a^b is "<<(a^b)<<endl;

//     cout<< (17>>1)<<endl;
//     cout<< (17>>2)<<endl;
//     cout<< (19<<1)<<endl;
//     cout<< (21<<2)<<endl;

// int i = 7;

// cout<< (++i) <<endl;
// // 8   
// cout<< (i++) <<endl;
// // 8   i = 9
// cout<< (i--) <<endl;
// // 9   i = 8
// cout<< (--i) <<endl;
// // 7   i = 7


// int a , b = 1;
// a = 10;
// if(++a)
// {
//     cout<<b;
// }
// else
// cout<< ++b;


// int a = 1;
// int b = 2;
// if(a-- > 0 && ++b > 2)
// {
//     cout<<"inside if";
// }
// else{
//     cout<<"inside else";
// }
// cout<< a << " " << b << endl;


// int number = 3;
// cout<< (25 * (++number) );


// int a = 1;
// int b = a++;
// int c = ++a;
// cout<< b ;
// cout << c;


// int n;
// cout<<"enter the number n"<<endl;
// cin>>n;
// int sum = 0;
// for( int i=0; i<=n ; i++)
// {
//     sum += i;
// }

// cout<<sum<<endl;


// int n = 10;
// int a = 0;
// int b = 1;
// cout<<a <<" " << b <<" " ;
// for(int i = 1; i<=n; i++)
// {
//     int nextNumber = a + b;
//     cout<<nextNumber<<" ";

//     a = b;
//     b = nextNumber;
// }

// bool isPrime = 1;
// for(int i = 2; i < n; i++)
// {
//     if(n%i == 0)
//     {
//         isPrime = 0;
//         break;
//     }
// }

// if(isPrime == 0)
// {
//     cout<<" not a prime number"<<endl;
// }
// else{
//     cout<<" prime"<<endl;
// }

// for(int i = 0; i < 5; i++)
// {
//     cout<<"hi"<<endl;
//     cout<<"hey"<<endl;
//     continue;
//     cout<<"reply to karde"<<endl;
// }


// for(int i = 0; i <= 15; i+=2)
// {
//     cout<< i << " ";
//     if( i&1)
//     {
//         continue;
//     }
//     i++;
// }

// for(int i = 0; i < 5; i++)
// {
//     for(int j = i; j <= 5; j++)
//     {
//         if(i+j == 10)
//         {
//             break;
//         }
//     cout<<i << " " << j <<endl;
//     }
// }


// difference bw product and sum of digits of a no.

int n = 456;
int prod = 1;
int sum = 0;
while(n!=0)
{
  int digit = n%10;
  prod = prod*digit;
  sum = sum+digit;
  n = n/10;
}
cout<<(prod-sum)<<endl;


    return 0;
}