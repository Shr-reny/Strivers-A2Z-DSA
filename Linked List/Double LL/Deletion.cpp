/*

Deletion at a given position k

*/

Node* delete_head(Node* head){
        if(head == nullptr || head->next == nullptr) return nullptr;
        head = head->next;
        head->prev = nullptr;
        return head;
    }
    Node* deleteNode(Node* head, int x) {
        Node* temp=head;
        if(x == 1) return delete_head(head);
        for(int i=1;i<x;i++)
        {
            temp=temp->next;
        }
        if(temp && temp->next)
        {
            temp->prev->next= temp->next;
            temp->next->prev=temp->prev;
        }
        else if(temp)
        {
            temp->prev->next=NULL;
        }
        return head;
    }
