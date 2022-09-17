#include<iostream>
using namespace std;
int main(){
    
///// factors of a number:

    int n, i ;
    cout<<"enter a positive integer"<<endl;
    cin>>n;

    for( i = 1; i <= n ; i++){
    if(n%i == 0)
    {
        cout<<i<< " ";
    }

    }



    return 0;
}