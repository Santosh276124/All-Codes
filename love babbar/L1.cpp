#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the numbers" << endl;
    cin >> n;

    // if(a>b){
    //     cout<<"a is greater than b"<<endl;
    // }
    // else{
    //     cout<<"b is greater than a"<<endl;
    // }

    // if(n%2 == 0){
    //     cout<< n <<" is even"<<endl;
    // }
    // else{
    //     cout<< n <<" is odd"<<endl;
    // }

    // if(n>0){
    //     cout<<"no is positive"<<endl;
    // }
    // else if(n<0)
    // {
    //      cout<<"no is negative"<<endl;
    // }
    // else{
    //     cout<< "no is zero"<<endl;
    // }

    // int a,b,c;
    // cin>>a>>b>>c;

    // if(a + b > c && b + c > a && c + a > b){
    //     cout<<"triangle is valid"<<endl;

    // }
    // else{
    //     cout<<"triangle is invalid"<<endl;
    // }

    // int num  = 1;
    // while(num<=n){
    //     cout<<num<<'\t';
    //     num = num + 1;
    // }

    // int num  = 2;
    // while(num <= n){
    //     cout<<num<<'\t';
    //     num = num + 2;
    // }

    // int num  = 1;
    // while(num <= n){
    //     cout<<num<<'\t';
    //     num = num + 2;
    // }

    // int sum  = 0 , num = 1;
    // while(num<= n){
    //     sum = sum + num;
    //     num = num + 1;
    // }
    //     cout<<sum;

    // int fact  = 1 , num = 1;
    // while(num<= n){
    //     fact = fact * num;
    //     num = num + 1;
    // }
    //     cout<<fact;

    int div = 2;
    while (div < n)
    {
        if (n % div == 0)
        {
            cout << "not prime for " << div << endl;
        }
        else
        {
            cout << "prime for " << div << endl;
        }
        div = div + 1;
    }

    return 0;
}