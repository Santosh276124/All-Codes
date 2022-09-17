
#include <iostream>
using namespace std;
/*

// swap alternate:

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}

void swapAlternate(int arr[] , int size)
{
    for(int i = 0; i < size ; i+=2)
    {
        if(i+1 < size)
        {
            // swap(arr[i] , arr[i+1]);
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}



int main(){

int even[8] = {5,3,4,7,6,3,2,8} ;
int odd[5] = {5,3,1,7,0} ;


swapAlternate(even,8);
swapAlternate(odd,5);

printArray(even , 8);
printArray(odd , 5);



    return 0;
}
*/
/*

// sort 0 and 1:

void printArray(int arr[] , int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

void sortOne(int arr[] , int n)
{
    int i = 0, j = n-1;

while(i < j)
{
 if(arr[i] == 0)
 {
    i++;
 }
 else if(arr[j] == 1)
 {
    j--;
 }

else{
    swap(arr[i] , arr[j]);
  i++;
  j--;
   }

}
}

int main(){

int arr[8] = {1,1,1,0,0,0,0,0};

sortOne(arr,8);
printArray(arr,8);

    return 0;
}
*/

  // sort 0 , 1, and 2:


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{

    int left = 0, right = n - 1, mid = 0;

    while (mid <= right)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[left]);
            left++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        { // arr[mid] > 1;

            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

int main()
{

    int arr[6] = {0, 1, 2, 2, 1, 1};

    sortOne(arr, 6);
    printArray(arr, 6);

    return 0;
}
