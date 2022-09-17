#include<iostream>
using namespace std;

/////  power of number:

/*
int power(int base, int exp)
{
    int ans = 1;
    for(int i = 1; i <= exp; i++)
    {
        ans = ans*base;
    }
return ans;
}


int main(){
    
int base , exp;
cin>> base >> exp;

int answer = power(base,exp);
cout<<answer<<endl;

*/

// check even or odd:
/*

bool isEven(int a)
{
    //odd
    if(a&1){
        return 0;
      }
      //even
    return 1;
}


int main(){

int num;
cin >> num;


if(isEven(num))
{
    cout<<"number is even"<<endl;
}
else{
    cout<<"number is odd"<<endl;
}



int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num =factorial(n);
    int denom = factorial(r) * factorial(n-r);
  
    return num/denom;
}

int main(){

int n , r;
cin>> n >> r;

cout<<"answer is "<< nCr(n,r)<<endl;






void printCountint(int num)

{
    for(int i = 1; i<= num ; i++){
        cout<< i << " ";
    }

}
int main(){
     int n;
     cin>>n;
     printCountint(n);




bool isPrime(int n)
{
    for(int i= 2; i < n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){

int n;
cin>>n;

if(isPrime(n))
{
    cout<<"is a prime number"<<endl;
}
else
{
    cout<<"not a prime number"<<endl;
}

*/


int update(int a)
{
   int ans = a * a;
    return ans;

}
int main()
{
int a = 15;
 a = update(a);
cout<< a << endl;
// cout<<update(a);

  return 0;
}