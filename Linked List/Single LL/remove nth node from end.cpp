/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
*/

/*
O(L)+O(L-N), We are calculating the length of the linked list and then iterating up to the (L-N)th node of the linked list,
where L is the total length of the list.
Space Complexity:  O(1), as we have not used any extra space.
The brute force, in the worst case, has a time complexity of O(2*L), where L is the length of the linked list.
*/

ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0;
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            l++;
        }
        int x=l-n;
        if(n==l)
        {
            ListNode* nhead=head->next;
            delete(head);
            return nhead;
        }
        temp=head;
        while(temp!=NULL)
        {
            x--;
            if(x==0) break;
            temp=temp->next;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete(del);
        return head;
    }

/*
Time Complexity: O(N) since the fast pointer will traverse the entire linked list, where N is the length of the linked list.
Space Complexity: O(1), as we have not used any extra space.
*/
ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(fast==NULL)
        {
            return head->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* del=slow->next;
        slow->next=slow->next->next;
        delete(del);
        return head;
    }
