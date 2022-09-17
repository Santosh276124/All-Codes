// check if sorted array::::::

/*
#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case:
    if(size == 0 || size == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;

    }

    else{
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}


int main(){
    int arr[5] = {2,4,13,9,11};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans)
    {
        cout << "array is sorted" << endl;
    }

    else{
         cout << "array is not sorted" << endl;
    }


    return 0;
}


// sum of element of array:::::

#include<iostream>
using namespace std;

int getSum(int *arr, int size)
{
    // base case:
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int remaingPart = getSum(arr+1,size-1);
    int sum = arr[0] + remaingPart;
    return sum;
}

int main(){
    
    int arr[5] = {2,4,5,6,8};
    int size = 5;

    int ans  = getSum(arr,size);

    cout << "sum is " << ans << endl;

    return 0;
}

// Linear search::::::::::

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    // base case::
    if( size == 0)
    {
        return false;

    }
    if(arr[0] == k)
    {
        return true;
    }
    else{

        bool remainingPart = linearSearch(arr + 1, size - 1, k );
        return remainingPart;
    }
}

int main(){
    int arr[5] = {2,4,5,6,8};
    int size = 5;
    int key = 1;
    bool ans = linearSearch(arr, size, key);

if(ans)
{
    cout << "present" << endl;
}
else{
    cout<< "absent" << endl;
}

    return 0;
}

*/
// Binary search;;;;

#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for(int i = s; i <=e; i++ )
    {
        cout<< arr[i] <<" ";
    }cout<< endl;
}
bool binarySearch(int arr[], int s, int e, int k)
{
    cout << endl;
    print(arr, s,e);

    // base case:

    if(s > e)
    {
        return false;
    }
    int mid = s + (e-s)/2;
    cout<<"value of mid is: " << arr[mid] <<endl;

    if(arr[mid] == k) 
    {
        return true;
    }

    if(arr[mid] < k)
    {
        return binarySearch(arr, mid+1, e,k );
    }
    else{
         return binarySearch(arr, s, mid-1 ,k );
    }
}

int main(){
    
 int arr[5] = {2,4,5,6,8};
    int size = 5;
    int key = 10;

bool ans = binarySearch(arr, 0, size - 1 , key);

if(ans)
{
    cout<<"present" << endl;
}
else{
    cout<<"absent" << endl;
}
    return 0;
}