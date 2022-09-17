
/*
//reverse a linked list::

class Solution {
    
    ListNode* reverse1(ListNode* head)
    {
        // base case::
        if(head == NULL || head-> next == NULL)
        {
            return head;
        }
        
        ListNode* chotaHead = reverse1(head->next);
        
        head -> next -> next = head;
            head->next = NULL ;
        
        
        return chotaHead;
        
        
    }
    
public:
    ListNode* reverseList(ListNode* head) {
        
        
        return reverse1(head);
        
        
    }
};

class Solution {
    
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev)
    {
        
        //base case::
        if(curr == NULL)
        {
            head = prev;
            return;
        }
        
        // RR::
        ListNode* forward = curr->next;
        reverse(head,forward,curr);
        curr->next = prev;
        
        
    }
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head, curr, prev);
        
        return head;
        
    }
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
                
        }
        
        return prev;
        
    }
};
*/


