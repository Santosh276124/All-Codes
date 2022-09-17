/*
#include<iostream>
using namespace std;
int main(){
    
int row;
cin>>row;
int col;
cin>>col;

// creating a 2D array:

int** arr = new int*[row];
for(int i = 0; i < row; i++)
{
    arr[i] = new int[col];
}

// taking input:
for(int i = 0; i < row; i++)
{
    for(int j = 0; j < col; j++)
    {
        cin>> arr[i][j];
    }
}

//taking output:
cout<<endl;
for(int i = 0; i < row; i++)
{
    for(int j = 0; j < col; j++)
    {
       cout << arr[i][j] <<" ";
    }
    cout << endl;
}


// releasing memory:
for(int i = 0; i < row; i++)
{
    delete [] arr[i];
}

delete [] arr;

    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    
int row;
cin>>row;

int *col = new int[row];
for(int i = 0; i < row; i++)
{
    int n;
    cin >> n;
    col[i] = n;
}

// creating a 2D array:

int* arr = new int[row];
for(int i = 0; i < row; i++)
{
    arr[i] = new int[col[i]];
}

// taking input:
for(int i = 0; i < row; i++)
{
    for(int j = 0; j < col[i]; j++)
    {
        int element;
        cin>> element;
        arr[i][j] = element;
    }
}

//taking output:
cout<<endl;
for(int i = 0; i < row; i++)
{
    for(int j = 0; j < col[i]; j++)
    {
       cout << arr[i][j] <<" ";
    }
    cout << endl;
}


// releasing memory:
// for(int i = 0; i < row; i++)
// {
//     delete [] arr[i];
// }

// delete [] arr;

    return 0;
}
