/*

You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        int carry=0;

        while ((t1!=NULL || t2!=NULL) || carry)
        {
            int sum=0;
            if(t1!=NULL){
            sum=sum+t1->val;
            t1=t1->next;}
            if(t2!=NULL){
            sum=sum+t2->val;
            t2=t2->next;}
            sum+=carry;
            ListNode* newNode= new ListNode(sum%10);
            carry=sum/10;
            curr->next=newNode;
            curr=curr->next;
        }
        return dummy->next;
    }
};
