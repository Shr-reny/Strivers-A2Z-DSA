/* Given an array of integer arr. Your task is to construct the linked list from arr & return the head of the linked list.

Examples:

Input: arr = [1, 2, 3, 4, 5]
Output: LinkedList: 1->2->3->4->5

move is the pointer that links one node to other and temp is the node getting created 
*/

Node* constructLL(vector<int>& arr) {
        int n=arr.size();
        Node * head=new Node(arr[0]);
        Node * move=head;
        for(int i=1;i<n;i++){
            Node* temp= new Node(arr[i]);
            move->next=temp;
            move=temp;
        }
        return head;
    }
