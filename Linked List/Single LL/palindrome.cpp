/* Given the head of a singly linked list, return true if it is a palindrome or false otherwise. */

/* TC is O(2N) and SC is O(n) */
bool isPalindrome(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(st.top()!=temp->val) return false;
            temp=temp->next;
            st.pop();
        }
        return true;
    }

/* TC is O (2* N) The algorithm traverses the linked list twice, dividing it into halves.
During the first traversal, it reverses one-half of the list, and during the second traversal,
it compares the elements of both halves. As each traversal covers N/2 elements, the time complexity
is calculated as O(N/2 + N/2 + N/2 + N/2), which simplifies to O(2N), ultimately representing O(N) and SC is O(1) */

ListNode* rev(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newh=rev(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newh;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* first=head;
        ListNode* second=rev(slow);
        while(second!=NULL)
        {
        if(first->val!=second->val)
        {
            return false;
        }
        first=first->next;
        second=second->next;
        }
        return true;
    }
