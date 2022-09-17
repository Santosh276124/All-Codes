/*
#include<iostream>
using namespace std;


class kQueue 
{
private:
   int n;
   int k;
   int *front;
   int *rear;
   int *arr;
   int freespot;
   int *next;

public:
 kQueue(int n, int k)
  {
    this -> n = n;
    this -> k = k;
    front = new int[k];

    rear = new int[k];

    for(int i = 0; i < k; i++)
    {
        front[i] = -1;
        rear[i] = -1;
    }

    next = new int[n];
    for(int i = 0; i < n; i++)
    {
        next[i] = i+1;
    }
    next[n-1]  -1;
    arr = new int[n];
    freespot = 0;
  }

  void enqueue(int data, int qn)
  {
    //overflow
    if(freespot == -1)
    {
        cout<<"no free space is present: "<<endl;
        return;
    }

   //find first free index:
   int index = freespot;

   //update freespot:
   freespot = next[index];

   //check whether firs element:
   if(front[qn - 1] == -1)
   {
    front[qn - 1] = index;

   }
   else{
    //link new element to prev element:
    next[rear[qn - 1]] = index;
   }

   //update next:
   next[index] = -1;

   //update rear:
   rear[qn-1] = index;

   //push element:
   arr[index] = data;

  }

  int dequeue(int qn)
  {
    //underflopw:
    if(front[qn -1] == -1)
    {
        cout<<"queue underflow:"<<endl;
        return -1;
    }

    //find index to pop
    int index = front[qn-1];

    //front ko aage badhao:
    front[qn -1] = next[index];

    //freeslot ko maage kro:
    next[index] = freespot;
    freespot = index;

    return arr[index];

  }


};



int main(){
    
kQueue q(10,3);
q.enqueue(10,1);
q.enqueue(15,1);
q.enqueue(20,2);
q.enqueue(25,1);

cout<< q.dequeue(1) << endl;
cout<< q.dequeue(2) << endl;
cout<< q.dequeue(1) << endl;
cout<< q.dequeue(1) << endl;

cout<<q.dequeue(1) << endl;

    return 0;
}
*/
#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr , int n , int k)
{
  deque<int> maxi(k);
  deque<int> mini(k);

    for(int i = 0; i < k; i++)
    {
      while( !maxi.empty() && arr[maxi.back()] <= arr[i])
        maxi.pop_back();

    while(!mini.empty() && arr[mini.back()] >= arr[i])
      mini.pop_back();


    maxi.push_back(i);
    mini.push_back(i);
      
    }

    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];
    for(int i = k; i < n; i++)
    {
      

      //next window:
      //removal

      while(!maxi.empty() && i - maxi.front() >= k)
      {
        maxi.pop_front();
      }
      
      while(!mini.empty() && i - mini.front() >= k)
      {
        mini.pop_front();
      }

      //addition:

    while( !maxi.empty() && arr[maxi.back()] <= arr[i])
        maxi.pop_back();

    while(!mini.empty() && arr[mini.back()] >= arr[i])
      mini.pop_back();


    maxi.push_back(i);
    mini.push_back(i);

    ans += arr[maxi.front()] + arr[mini.front()];
    }

//consider for last window:


return ans;

}



int main(){
  
int arr[7] = {2,5,-1,7,-3,-1,2};
int k = 4;
cout << solve(arr, 7 , k) <<endl;




  return 0;
}