
/*

#include<iostream>
using namespace std;

void conquer(int* arr, int s, int mid, int e)
{
    int *merged =  new int[e-s+1];
    int length = e-s+1;

    int idx1 = s;
    int idx2 = mid+1;
    int k = 0;

    while(idx1 <= mid && idx2 <= e)
    {
        if(arr[idx1] <= arr[idx2])
        {
            merged[k++] = arr[idx1++];
        }
        else{
            merged[k++] = arr[idx2++];
        }
    }

    while(idx1 <= mid)
    {
        
            merged[k++] = arr[idx1++];
    }
    while(idx2 <= e)
    {
        merged[k++] = arr[idx2++];
    }

    for(int i = 0, j = s; i < length; i++,j++)
    {
        arr[j] = merged[i];
    }
}




void divide(int* arr, int s, int e)
{
    if(s >= e)
    return;

    int mid = s + (e-s)/2;

    divide(arr, s, mid);
    divide(arr, mid+1, e);
    conquer(arr, s, mid, e);
}

int main(){
    
    int arr[6] = {2,3,6,0,9,1};
    int n = 6;

    divide(arr, 0, n-1);

    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;



    return 0;
}
*/
#include<iostream>
using namespace std;

void conquer(int* arr, int s, int mid, int e)
{
    int* merged = new int[e-s+1];
    int length = e-s+1;

    int idx1 = s;
    int idx2 = mid+1;
    int k = 0;

    while(idx1 <= mid && idx2 <= e)
    {
        if(arr[idx1] <= arr[idx2])
        {
            merged[k++] = arr[idx1++];
        }
        else{
            merged[k++] = arr[idx2++];
        }
    }

    while(idx1 <= mid)
    {
          merged[k++] = arr[idx1++];
    }
    while(idx2 <= e)
    {
        merged[k++] = arr[idx2++];
    }

    for(int i = 0, j = s; i < length; i++,j++)
    {
        arr[j] = merged[i];
    }
}


void divide(int* arr, int s, int e)
{
    int mid = s + (e-s)/2;
    if(s >= e)
    return ;

    divide(arr, s, mid);
    divide(arr, mid+1, e);
    conquer(arr, s, mid, e);
}

int main(){
    
int arr[] = {2,4,1,0,5,8,9};
int n = 7;

divide(arr, 0, n-1);

for(int i = 0; i < n; i++)
{
    cout<< arr[i] << " ";

}
cout<<endl;






    return 0;
}