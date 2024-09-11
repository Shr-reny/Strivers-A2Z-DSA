/* 

Given a singly linked list and an integer, x. Delete the xth node (1-based indexing) from the singly linked list.
Input: Linked list: 1 -> 3 -> 4, x = 3
Output: 1 -> 3

*/

Node* deleteNode(Node* head, int x) {
        Node* prev=head;
        if(x==1) head=head->next;
        for(int i=1;i<x-1;i++)
        {
            prev=prev->next;
        }
        prev->next=prev->next->next;
        return head;
    }

/* 

LeetCode :
There is a singly-linked list head and we want to delete a node node in it.
You are given the node to be deleted node. You will not be given access to the first node of head.
All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Copy the next node's value into current node then delete next node.

*/

void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
