#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

void printROwSum(int arr[][4], int row , int col)
{
    cout<<"printing the sum\\"<<endl;
    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0; col<4; col++)
        {
            sum += arr[row][col];
        }
      cout<<sum<<" ";
    }
   cout<<endl;
}

void printcolSum(int arr[][4], int row , int col)
{
    cout<<"printing the sum\\"<<endl;
    for(int col = 0; col<4; col++)
    {
        int sum = 0;
        for(int row = 0; row < 3; row++)
        
        {
            sum += arr[row][col];
        }
      cout<<sum<<" ";
    }
   cout<<endl;
}

void largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++)
    {
        int sum = 0;
        for(int col = 0; col<4; col++)
        {
            sum += arr[row][col];
        }
      if(sum > maxi)
      {
        maxi = sum;
        rowIndex = row;
      }
    }
   
   cout<<"the maximum sum is " << maxi <<endl;
//    return rowIndex;
   cout<< "Max row is at index " << rowIndex<< endl;
}




int main()
{

    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,11,12,13};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

 cout << "enter the elements" <<endl;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // for(int i = 0; i < 4; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         cin>> arr[j][i];
    //     }
    // }

    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
/*/
    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    printROwSum(arr, 3, 4);
    printcolSum(arr, 3, 4);

*/

largestRowSum(arr,3,4);
    return 0;
}