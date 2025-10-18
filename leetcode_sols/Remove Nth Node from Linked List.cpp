/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *p=dummy,*q=dummy,*temp;
        for(int i=0;i<n;i++) q = q->next;
        //Now Ill parallely traverse both p and q
        while(q->next != NULL) p=p->next,q=q->next;
        temp=p->next; //I need to store the node to delete it
        p->next=p->next->next; delete(temp);
        return dummy->next;
    }
};
