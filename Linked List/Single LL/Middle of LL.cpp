/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*/

/* Two pointer approach - O(N) */

 ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }

/* Length approach - O(N) */

int length(ListNode* head)
    {
        int l=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            l++;
        }
        return l;
    }
    ListNode* middleNode(ListNode* head) {
        int l=length(head);
        int ans=(l/2);
        ListNode* temp=head;
        int i=0;
        while(i<ans)
        {
            temp=temp->next;
            i++;
        }
        return temp;
    }
