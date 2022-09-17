/*
#include<iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    // base case:::
    if(i > j)
       return;
    

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);

}


int main(){
    
    string name = "abcde";
    int n = name.length();

    reverse(name, 0, n-1);

    cout<< name<< endl;


    return 0;
}

#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    if(i > j)
    return true;

    if(str[i] != str[j])
    return false;

    else
     return checkPalindrome(str, i+1, j-1);
}


int main(){
    
string name = "abbacg";

bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );

if(isPalindrome)
{
    cout<<"palindrome"<<endl;
}
else
{
    cout<< "not a palindrome" << endl;
}

    return 0;
}


#include<iostream>
using namespace std;

 double power(double a, int b)
{
    if(b==0)
    return 1;

    if(b==1)
    return a;

double ans = power(a, b/2);

if(b < 0)
{
    b = abs(b);
    a = 1/a;

}

if(b%2==0)
{
    return ans*ans;
}
else
return a*ans*ans;

}

int main(){
    
    int a, b;
    cin>>a>>b;

   

double ans = power(a,b);

cout<< ans<<endl;


    return 0;
}

*/

#include<iostream>
using namespace std;

void sortArray(int* arr, int n)
{
    if(n == 0 || n == 1)
      return;

      for(int i = 0; i < n-1; i++)
      {

        if(arr[i] > arr[i+1])
           swap(arr[i], arr[i+1]);

      }

      sortArray(arr, n-1);
}


int main(){
    
int arr[] = {2,4,1,5,0,9};
int n = 6;

sortArray(arr, 6);

for(int i = 0; i < n; i++)
{
    cout<< arr[i] << " ";

}cout<< endl;






    return 0;
}
