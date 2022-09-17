#include <iostream>
using namespace std;
/*
// linear search:********************

bool search(int arr[] , int size , int key)
{
    for(int i = 0; i < size ; i++)
    {
        if( arr[i] == key)
        {
            return 1;
        }
    }
    return 0;

}

int main(){

    int arr[10] = { 5, 7, 8, 22, 10, 15, 11, -8, -5, 1};

    cout<<"enter the element to search for " << endl;
    int key;
    cin >> key;

  bool found = search(arr , 10 , key);

  if(found)
  {
    cout<<"key is present" << endl;
  }
else{
    cout<<"key is absent" << endl;
}

cout<<endl;



// reverse an array:*******************

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {

        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {4, 5, 6, 7, 8, 9};
    int brr[5] = {4, 5, 6, 7, 8};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}



// scope in array:************************

void update(int arr[] ,int size)
{
    arr[0] = 120;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

int arr[3] = { 1,2,3};

for(int i = 0 ; i < 3 ; i++){
    cout<< arr[i] << " ";
}
cout<<endl;

update(arr,3);

for(int i = 0 ; i < 3 ; i++){
    cout<< arr[i] << " ";
}
cout<<endl;






    return 0;
}


// sum of all element of an array:

int sumArray(int arr[] , int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum+=arr[i];

    }
    return sum;
}
int main()
{
  int arr[100];
  int size;
  cin>>size;

  for(int i = 0; i<size; i++)
  {
    cin>>arr[i];
  }

  cout<<"sum of all element of array is: " <<sumArray(arr,size) << endl;




    return 0;
}

//  to initialize entire array with an array:

int main(){

int array[100];
fill_n(array, 100, 1);
for(int i = 0; i < 5; i++)
cout<< array[i] << " ";



    return 0;
}
*/