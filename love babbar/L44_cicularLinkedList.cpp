#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   
//constructor:
Node(int d){
    this -> data= d;
    this -> next = NULL;
}

~Node(){
    int value = this -> data;
    if(this -> next != NULL)
    {
        delete next;
        next = NULL;
    }
    cout<<"memory is free for node with data : " << value << endl;
}

};

void insertNode(Node* &tail, int element, int d)
{
    //empty list:
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else{
        //non empty list:
        Node* curr = tail;

        while(curr -> data != element)
        {
            curr = curr -> next;
        }
        //element found curr is representing the element:
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* tail)
{
  Node* temp = tail;

  if(tail == NULL)
  {
    cout<< "list is empty: ";
    return;
  }
  do{
      cout << tail->data << " ";
      tail = tail-> next;
    
  }while(tail != temp);
  cout << endl;

}

void deleteNode(Node* &tail, int value)
{
    // empty list:
    if(tail == NULL)
    {
    cout<<"list is already empty: " << endl;
     return ;
    }

    else{
          //non empty::
          Node* prev = tail;
          Node* curr = prev -> next;
        
        while(curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;

        }
        
        prev -> next = curr -> next;

        //1 node list:
        if(curr == prev)
        {
            tail = NULL;
        }
        // >= 2 node;
       else if(tail == curr )
        {
            tail = prev;
        }

        curr-> next = NULL;
        delete curr;

    }
}

bool isCircularList(Node* tail)

{
    //empty list:
    if(tail == NULL)
    {
        return true;
    }

    Node* temp = tail -> next;
    while(temp != NULL && temp != tail)
    {
        temp = temp-> next;
    }

    if(temp == tail)
    {
        return true;
    }

    return false;
}

bool detectLoop(Node* head)
{

 if(head == NULL)
 {
    return false;
 }

 Node* temp = head;
 
 map <Node* , bool> visited;

 while(temp != NULL)
 {
    if(visited[temp] == true)
    {
        return true;
    }
    visited[temp] == true;
   temp = temp->next;

 }

return false;


}


int main(){
    
Node* tail = NULL;

//empty list:
insertNode(tail,5,3);
print(tail);
/*
insertNode(tail, 3, 5);
print(tail);
insertNode(tail, 5, 7);
print(tail);
insertNode(tail, 7, 9);
print(tail);
insertNode(tail, 5, 6);
print(tail);
insertNode(tail, 9, 10);
print(tail);
insertNode(tail, 3, 4);
print(tail);

deleteNode(tail,3);
print(tail);
*/
cout << endl;

if(isCircularList(tail))
{
    cout<<"linked list is circular in nature: " << endl;
}
else{
    cout<<"linked list is not circular in nature: " << endl;
}
    return 0;
}