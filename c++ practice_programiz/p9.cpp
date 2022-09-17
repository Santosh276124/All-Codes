#include<iostream>
using namespace std;




int fib(int n){

   
    
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

   
   
    return fib(n-2) + fib(n-1);
    
}






int main(){
    

// ********** multiplication table/


    int a;
    cout <<"enter a positive number:";
    cin>>a;

    // for (int i = 1; i <= 10; ++i)
    // {
    //    cout << n << " * "  << i << " = " << n * i << endl;
    // }
    
//  int n , t1 = 0, t2 = 1, nextTerm = 0;
//     cout <<"enter a positive number:";
//     cin>>n;

//   cout<<"fibonacci series:" << t1 << " , " << t2 << " , ";

// nextTerm = t1 + t2;

// while(nextTerm <= n){
//     cout<< nextTerm << " , ";
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;

// }

// cout << " fibonacci series:";

// for(int i = 1; i <= n; ++i){
//     if(i == 1){
//         cout<< t1 << " , ";
//         continue;
//     }
//    if(i == 2){
//     cout<< t2 << " , ";
//         continue;
//    }
    
//     nextTerm = t1 + t2;
//     t1 = t2;
//     t2 = nextTerm;

//   cout << nextTerm << " , ";
// }

cout << "the term in series at position " << a << " is : " <<fib(a) <<endl;


    return 0;
}