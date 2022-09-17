
/*
#include<iostream>
using namespace std;

void reachHome(int src, int dest)
{

    cout<<"source " << src << " destination " << dest << endl;
    //base case:
    if(src == dest)
    {
        cout<<"pahuch gya::"<<endl;
        return;

    }
    // processing:::
    src++;

    // recutrsive call::::::

    reachHome(src, dest);
}


int main(){
    
int dest = 10;
int src = 1;

cout<<endl;

reachHome(src, dest);

    return 0;
}
*/
///  Say DIgit::


#include<iostream>
using namespace std;

void sayDigit(int n, string arr[])
{
    //base case:
    if(n==0)
    return ;

    // processing:
    int digit = n%10;
    n = n/10;

    // RR:

    sayDigit(n,arr);

    cout<< arr[digit] << " ";

}



int main(){
    int n;
    cin >> n;
    
string arr[10] = {"zero" , "one", "two", "three" , "four " , "five " , "six " , " seven" , " eight" ," nine"};


sayDigit(n, arr);



    return 0;
}