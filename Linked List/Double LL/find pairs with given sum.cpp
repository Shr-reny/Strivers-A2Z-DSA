/*
Given a sorted doubly linked list of positive distinct elements, the task is to find pairs in a doubly-linked list whose sum is equal to given value target.

Example 1:
Input:  
1 <-> 2 <-> 4 <-> 5 <-> 6 <-> 8 <-> 9
target = 7
Output: (1, 6), (2,5)
Explanation: We can see that there are two pairs 
(1, 6) and (2,5) with sum 7.
*/

vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>>v;
        Node*f=head;
        Node*l=head;
        while(l->next!=NULL)
        {
            l=l->next;
        }
        while(f->data<l->data)
        {
            if(f->data+l->data==target)
            {
                v.push_back({f->data,l->data});
                f=f->next;
                l=l->prev;
            }
            else if(f->data+l->data<target)
            {
                f=f->next;
            }
            else
            {
                l=l->prev;
            }
        }
        return v;
    }
