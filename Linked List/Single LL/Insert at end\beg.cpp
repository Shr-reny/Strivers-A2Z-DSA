/* 

Given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the modified Linked List.
Input: LinkedList: 1->2->3->4->5 , x = 6
Output: 1->2->3->4->5->6

*/

Node *insertAtEnd(Node *head, int x) {
        Node* temp=head;
        Node* neww=new Node(x);
        if(head==NULL) return neww;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=neww;
        return head;
    }

/* Insertion at beginning */

 Node *insertAtBegining(Node *head, int x) {
        Node* neww=new Node(x);
        neww->next=head;
        head=neww;
        return head;
    }
