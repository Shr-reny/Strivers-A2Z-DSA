/*
Given a doubly linked list of n nodes sorted by values, the task is to remove duplicate nodes present in the linked list.

Example:
Input:
n = 6
1<->1<->1<->2<->3<->4
Output:
1<->2<->3<->4
Explanation:
Only the first occurance of node with value 1 is 
retained, rest nodes with value = 1 are deleted.
*/
    Node * removeDuplicates(struct Node *head)
    {
        Node* temp=head->next;
        while(temp)
        {
            if(temp->data==temp->prev->data)
            {
                Node*p=temp->prev;
                Node*n=temp->next;
                p->next=n;
                if(n) n->prev=p;
            }
            temp=temp->next;
        }
        return head;
    }
