#include<iostream>
#include<map>
using namespace std;

class Node{

public:
int data;
Node* next;

//constructor::
Node(int data)
{
    this -> data = data;
    this -> next = NULL;
}

//destructor::
~Node()
{
    int value = this -> data;
    //memory free::
    if(this -> next != NULL)
    {
        delete next;
        this -> next = NULL;
    }

    cout << "memory is free for node with data : " << value << endl;
}

};

void insertAtTail(Node* &tail,int d)
{
    //new node created:
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int d)
{
    //new node created::
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    //insert at start::
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }

Node* temp = head;
int cnt = 1;

while(cnt < position-1)
{
    temp = temp -> next;
    cnt++;
}


    // insert at last position::
    if(temp -> next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    // creasting a node for d;

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position, Node* &head)
{
    //deleting first or start node::
    if(position == 1)
    {
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node:
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

bool detectLoop(Node* head)
{

 if(head == NULL)
 {
    return false;
 }

 Node* temp = head;
 
 map<Node* , bool> visited;

 while(temp != NULL)
 {
    if(visited[temp] == true)
    {
        cout<<"present on element: " << temp->data <<endl;
        return true;
    }
    visited[temp] = true;
   temp = temp->next;

 }

return false;


}

 Node* hasCycle(Node *head) {
        
        //By floyds cycle detection algo::
        if(head == NULL)
        {
            return NULL;
        }
        
        
        
        Node* slow = head;
        Node* fast = head;
        
        while(slow != NULL && fast != NULL)
        {
            fast = fast->next;
            
            if(fast != NULL)
            {
                fast = fast->next;
            }
            
            slow = slow->next;
            
            if(slow == fast)
            {
                 cout<<"present on element: " << slow->data <<endl;
                return slow;
            }
        }
        
      return NULL;  
         
    }

    Node* getStartingNode(Node* head)
    {

      if(head == NULL) return NULL;

      Node* intersection = hasCycle(head);

      if(intersection == NULL) return NULL;

      Node* slow = head;
      while(slow != intersection)
      {
        slow = slow ->next;
        intersection = intersection->next;
      }

    return slow;

    }

    Node* removeLoop(Node* head)
    {
        if(head == NULL)
        {
            return NULL;
        }

        Node* startOfLoop = getStartingNode(head);

        if(startOfLoop == NULL)
        return head;
       
       Node* temp = startOfLoop;

       while(temp -> next != startOfLoop)
       {
        temp = temp->next;

       }

       temp->next = NULL;
       return head;


    }


int main(){
    
Node* node1 = new Node(10);

// cout<< node1 -> data << endl;
// cout << node1 -> next << endl;

// head pointed to node1::

Node* head = node1;
Node* tail = node1;
print(head);

// insertAtHead(head, 12);
// print(head);
// insertAtHead(head, 15);
// print(head);


insertAtTail(tail,12);
// print(head);

insertAtTail(tail,15);
// print(head);

insertAtPosition(tail,head,4,22);
print(head);

tail->next = head->next;

// cout << "head" << head -> data << endl;
// cout << "tail" << tail -> data << endl;
// print(head);

// if(detectLoop(head))
// {
//     cout << "cycle is present: "<<endl;
// }
// else{
//     cout<<" cycle is not present: " <<endl;
// }

if(hasCycle(head))
{
    cout << "cycle is present: "<<endl;
}

else{
    cout<<" cycle is not present: " <<endl;
}

Node* loop = getStartingNode(head);
cout<<"lopp starts at node : " << loop->data <<endl;

removeLoop(head);
print(head);

// deleteNode(4,head);

// cout << "head" << head -> data << endl;
// cout << "tail" << tail -> data << endl;
    return 0;
}