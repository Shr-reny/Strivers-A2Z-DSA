/*
  Time Complexity: O(N log N)where N is the number of nodes in the linked list. Finding the middle node of the linked list requires
traversing it linearly taking O(N) time complexity and to reach the individual nodes of the list, it has to be split log N times 
(continuously halve the list until we have individual elements).

Space Complexity : O(1) as no additional data structures or space is allocated for storage during the merging process.
  However, space proportional to O(log N) stack space is required for the recursive calls. THe maximum recursion depth of log N height 
is occupied on the call stack.

*/

class Solution {
public:
    ListNode* middle(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        if(l1==NULL ) return l2;
        if(l2==NULL) return l1;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
        {
            temp->next=l1;
        }
        else
        {
            temp->next=l2;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* mid=middle(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        left=sortList(left);
        right=sortList(right);
        return merge(left,right);
    }
};
