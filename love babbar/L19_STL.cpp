/*
#include<iostream>
#include<array>
using namespace std;

int main(){

int basic[3] = {1,2,3};

array<int,4> a = {1,2,4,3};

int size = a.size();

for(int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}

cout<<"element at 2nd index :" <<a.at(2)<<endl;
cout<<"empty or not:" << a.empty()<<endl;
cout<<"First element: " << a.front() <<endl;
cout<<"last element: " << a.back() <<endl;

    return 0;
}

#include<iostream>
#include<vector>

using namespace std;
int main(){

vector<int> v;

vector<int> a(5,1);

for(int i:a)
{
    cout<<i<<" ";
}
cout<<endl;

vector<int> last(a);
cout<<"Print last a"<<endl;

for(int i:last)
{
    cout<<i<<" ";
}
cout<<endl;

cout<<"Capacity : " <<v.capacity() <<endl;

v.push_back(1);
cout<<"Capacity : " <<v.capacity() <<endl;

v.push_back(2);
cout<<"Capacity : " <<v.capacity() <<endl;

v.push_back(3);
cout<<"Capacity : " <<v.capacity() <<endl;
cout<<"Size : " << v.size() <<endl;

cout<<"Element at 2nd index is: " <<v.at(2) <<endl;

cout<<"Front " <<v.front() <<endl;
cout<<"back " <<v.back() <<endl;

cout<<"Before pop " <<endl;
for(int i:v)
{
    cout<<i<<" ";
}cout<<endl;

v.pop_back();

cout<<"After pop" <<endl;
for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;

cout<<"Before clear size "<<v.size()<<endl;
v.clear();
cout<<"After clear size "<<v.size()<<endl;

    return 0;
}


#include<iostream>
#include<deque>

using namespace std;
int main(){

deque<int> d;

d.push_front(2);
d.push_back(1);

// for(int i:d)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// d.pop_front();
// for(int i:d)
// {
//     cout<<i<<" ";
// }
// cout<<endl;


cout<<"Print first index element : "<<d.at(1)<<endl;

cout<<"Front " << d.front()<<endl;
cout<<"Back " << d.back()<<endl;

cout<<"Empty or Not: " <<d.empty()<<endl;

cout<<"Before erase:" <<d.size() <<endl;
d.erase(d.begin(), d.begin()+1);
cout<<"After erase:" <<d.size() <<endl;

for(int i:d)
{
    cout<<i<<" ";
}
cout<<endl;


    return 0;
}


#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;

    list<int> n(5,100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(3);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"size of list: " <<l.size()<<endl;

    return 0;
}

#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kumar");

    cout<<"Top element: " <<s.top()<<endl;    

    s.pop();
     cout<<"Top element: " <<s.top()<<endl;

     cout<<"Size of stack:" << s.size()<<endl;

     cout<<"empty or not "<<s.empty()<<endl;

    return 0;
}


#include<iostream>
#include<queue>
// first in first out:
using namespace std;
int main(){
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

  cout<<"First element: "<<q.front()<<endl;

  q.pop();
    cout<<"First element: "<<q.front()<<endl;

    cout<<"Size after pop: " <<q.size()<<endl;

    return 0;
}


#include<iostream>
#include<queue>
using namespace std;
int main(){
    
    //max heap:
    priority_queue<int> maxi;

    //mini heap:
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);

cout<<"Size is: " <<maxi.size()<<endl;

int n = maxi.size();

for(int i =0; i < n; i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;

mini.push(1);
mini.push(3);
mini.push(4);
mini.push(0);

int m = mini.size();

for(int i =0; i < m; i++)
{
    cout<<mini.top()<<" ";
    mini.pop();
}cout<<endl;

cout<<"empty or not :" <<mini.empty()<<endl;

    return 0;
}


#include<iostream>
#include<set>

using namespace std;
int main(){
    
set<int> s;

s.insert(5);
s.insert(5);
s.insert(3);
s.insert(1);
s.insert(5);
s.insert(4);
s.insert(0);

for(auto i : s)
{
    cout<<i<<endl;
}cout<<endl;

set<int>::iterator it = s.begin();
it++;

s.erase(it);

for(auto i : s)
{
    cout<<i<<endl;
}cout<<endl;

cout<< " 5 is present or not : "<<s.count(5)<<endl;


set<int>::iterator itr = s.find(3);
for(auto it = itr; it!= s.end(); it++)
{
    cout<<*it<<" ";
}cout<<endl;


}
*/
#include<iostream>
#include<map>

using namespace std;
int main(){
    
map<int, string> m;

m[1] = "babbar";
m[2] = "love";
m[13] = "kumar";

for(auto i:m)
{
    cout<<i.first<<endl;
}

m.insert( {5,"bheem"});
cout<<"before erase: " <<endl;

for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding 13: " <<m.count(13)<<endl;

m.erase(13);
cout<<"After erase: " <<endl;
for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding 13: " <<m.count(13)<<endl;


    return 0;
}