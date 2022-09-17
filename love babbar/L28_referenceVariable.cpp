#include <iostream>
using namespace std;

void update1(int &n)
{
    n++;
}
void update(int n)
{
    n++;
}
int main()
{
    /*
    int i = 5;
    int &j = i;  //Pass by reference
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
*/

int n = 5;
cout<<"before" << n <<endl;
update1(n);
cout<<"after" << n <<endl;

int m = 5;
cout<<"before" << m <<endl;
update(m);
cout<<"after" << m <<endl;

int j;
cin>>j;
int arr[j];

    return 0;
}
