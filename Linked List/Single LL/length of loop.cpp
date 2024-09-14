/*
  Given the head of a linked list, determine whether the list contains a loop.
  If a loop is present, return the number of nodes in the loop, otherwise return 0.
*/

int countNodesinLoop(Node *head) {
        int l=1,y=0;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){ y=1;break;}
        }
        if(y==0) return 0;
        while(slow->next!=fast)
        {
            slow=slow->next;
            l++;
        }
        return l;
    }
