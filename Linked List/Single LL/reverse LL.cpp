/* 

Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

*/


/* Iterative - O(N) and O(1) */
ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* front=NULL;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        return prev;
    }


/* Recursive - O(N) and O(1) */
ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newhead= reverseList(head->next);
        ListNode* front= head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
