/*
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices,
and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Note that the relative order inside both the even and odd groups should remain as it was in the input.
You must solve the problem in O(1) extra space complexity and O(n) time complexity.
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
*/

ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenHead = even;
        while(even!=NULL && even->next!=NULL)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            even=even->next;
            odd=odd->next;
        }
        odd->next=evenHead;
        return head;
    }
