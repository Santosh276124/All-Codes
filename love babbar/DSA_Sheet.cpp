#include<iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
          swap(arr[i],arr[j]);
          j++;
        }
    }
    
}


int main(){
    
    int arr[7] = {-1,2,6,1,-2,4,-5};
    int n = 7;

    rearrange(arr,7);

    for(int i =  0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;





    return 0;
}