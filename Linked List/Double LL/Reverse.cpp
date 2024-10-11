/*
Brute force will be to use a stack for reversal;
Optimal takes O(n) TC and O(1) SC;
*/

DLLNode* reverseDLL(DLLNode* head) {
        if(head==NULL || head->next==NULL) return head;
        DLLNode* last=NULL;
        DLLNode* curr=head;
        while(curr!=NULL)
        {
            last=curr->prev;
            curr->prev=curr->next;
            curr->next=last;
            curr=curr->prev;
        }
        return last->prev;
    }
