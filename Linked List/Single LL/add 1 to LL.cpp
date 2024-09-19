/*
You are given a linked list where each element in the list is a node and have an integer data.
You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 
ex:-
  9->9->null
  1->0->0->null
*/

/* Recursion and BackTracking */
int addf(Node* temp)
    {
        if(temp==NULL) return 1;
        int carry=addf(temp->next);
        temp->data+=carry;
        if(temp->data<10) return 0;
        temp->data=0;
        return 1;
    }
    Node* addOne(Node* head) {
        int carry= addf(head);
        if(carry==1)
        {
            Node* newN= new Node(1);
            newN->next=head;
            head=newN;
        }
        return head;
    }
