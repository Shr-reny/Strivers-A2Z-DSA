/* Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Input: LinkedList : 1->2->3->4->5
Output: 5

*/

int getCount(struct Node* head) {

        Node* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
