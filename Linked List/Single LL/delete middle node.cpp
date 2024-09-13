/*
  BRUTE FORCE:
  Taking length/2 and then iterating till middle 

  O(N + N/2) The loop traverses the entire linked list once to count the total number of nodes
  then the loop iterates halfway through the linked list to reach the middle node. 
*/
ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        ListNode* fast=head;
        if(head->next==NULL) return NULL;
        int len=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        temp=head;
        int n=len/2;
        int i=0;
        while(temp!=NULL)
        {
            n--;
            if(n==0)
            {
                ListNode* mid=temp;
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }

/*
OPTIMAL APPROACH:
Taking slow and fast pointers 
O(N/2) as only traversal till middle of LL is considered 
*/
ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head->next==NULL) return NULL;
        fast=fast->next->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
