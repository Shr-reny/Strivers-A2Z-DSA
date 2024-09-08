/* Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.

Input:
n = 4
1->2->3->4
Key = 3
Output:
True

*/

bool searchKey(int n, struct Node* head, int key) {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key) return true;
            temp=temp->next;
        }
        return false;
    }
