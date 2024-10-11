/*
You are given the head_ref of a doubly Linked List and a Key. Your task is to delete all occurrences of the given key if it is present and return the new DLL.

Example1:
Input: 
2<->2<->10<->8<->4<->2<->5<->2
2
Output: 
10<->8<->4<->5
Explanation: 
All Occurences of 2 have been deleted.
*/

void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* head=*head_ref;
        Node* curr=head;
        while(curr!=NULL)
        {
            if(curr->data==x){
            if(curr->prev!=NULL)
            {
                curr->prev->next=curr->next;
            }
            else
            {
                *head_ref=curr->next;
            }
            if(curr->next!=NULL)
            {
                curr->next->prev=curr->prev;
            }
            }
            curr=curr->next;
        }
    }
