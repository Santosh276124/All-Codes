#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row = 1;
        // int count = 1;
    while(row <= n)

    {
         
       
         int col = 1;
        
         while(col <= n - row + 1)
         {
            cout<<col;
            col = col + 1;
            // count = count + 1;
            

         }

         int stars = (row - 1)*2;
         while(stars)
         {
            cout<<"*";
            stars = stars - 1;
         }

        
        int j = n - row + 1;
        while(j >= 1)
        {
            cout<<j;
            j = j - 1;
        }
       
    cout<<endl;
    row = row + 1;
    }



    return 0;
}