
/*
//slow and fast approach::

class Solution {
    
    ListNode* getMiddle(ListNode* head)
        
    {
        if(head == NULL || head -> next == NULL )
        {
            return head;
        }
        if(head->next->next == NULL)
        {
            return head->next;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast -> next;
            }
            
            slow = slow -> next;
            
        }
        
        return slow;
       
    }
    
public:
    ListNode* middleNode(ListNode* head) {
        
        
        return getMiddle(head);
        
    }
};

//Iterative approach::

class Solution {
    
    int getlength(ListNode* head)
    {
        int len = 0;
        while(head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    
    
public:
    ListNode* middleNode(ListNode* head) {
        
        int len = getlength(head);
        int ans = len/2;
        
        ListNode* temp = head;
        int cnt = 0;
        while(cnt < ans)
        {
            cnt++;
            temp = temp->next;
            
        }
        
        return temp;
        
    }
};
*/