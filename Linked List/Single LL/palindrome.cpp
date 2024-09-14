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

