/*
Insert at a position k in a doubly LL
*/

Node *addNode(Node *head, int pos, int data) {
        Node* newn= new Node(data);
        Node* temp=head;
        for(int i=0;i<pos;i++)
        {
            temp=temp->next;
        }
        if(temp->next!=NULL)
        {
        Node* a=temp->next;
        temp->next=newn;
        newn->prev=temp;
        a->prev=newn;
        newn->next=a;
        }
        else
        {
        temp->next=newn;
        newn->prev=temp;
        }
        return head;
    }
