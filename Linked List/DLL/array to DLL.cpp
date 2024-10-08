/*
Given an integer array arr of size n. Construct the doubly linked list from arr and return the head of it.
*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        if(arr.size()==0) return nullptr;
        Node* head= new Node(arr[0]);
        Node* temp=head;
        for(int i=1;i<arr.size();i++)
        {
            Node* newnode= new Node(arr[i]);
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
        return head;
    }
};
