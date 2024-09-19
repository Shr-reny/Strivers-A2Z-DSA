/*
Given a linked list where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s
linked list such that all zeros segregate to the head side, 2s at the end of the linked list, and 1s in the middle of 0s and 2s.
*/

Node* segregate(Node* head) {

        Node* zh=new Node(-1);
        Node* oh=new Node(-1);
        Node* th=new Node(-1);
        Node* z=zh;
        Node* o=oh;
        Node* t=th;
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            {
                z->next=temp;
                z=z->next;
            }
            else if(temp->data==2)
            {
                t->next=temp;
                t=t->next;
            }
            else
            {
                o->next=temp;
                o=o->next;
            }
            temp=temp->next;
        }
        z->next=(oh->next)? (oh->next) : (th->next);
        o->next=th->next;
        t->next=NULL;
        return zh->next;
    }
