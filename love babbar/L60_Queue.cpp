#include<iostream>
#include<queue>
using namespace std;


int main(){
/*
deque<int> d;

d.push_front(12);
d.push_back(14);

cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_front();

cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_back();

if(d.empty())
{
    cout<<"empty: "<<endl;
}
else{
    cout<<"not empty: "<<endl;
}


   */
queue<int> q;
q.push(11);
//

cout<<q.front()<<endl;

q.push(12);
cout<<q.front()<<endl;

 q.pop();
// q.push(12);
cout<<q.front()<<endl;

cout<<"size of q is: "<<q.size()<<endl;

// q.pop();
// q.pop();


cout<<"size of q is: "<<q.size()<<endl;

if(q.empty())
{
    cout<<"q is empty: "<<endl;
}
else{
    cout <<" q is nopt empty: "<<endl;
}


    return 0;
}