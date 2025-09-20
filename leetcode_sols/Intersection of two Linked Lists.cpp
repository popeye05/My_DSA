/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//This is the Brute Force, Which I've Came Up With: 

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visit;
        ListNode *temp=headA;
        while(temp!=NULL)
        {
            //Each has a unique address
            visit.insert(temp);
            temp = temp->next;
        }
        temp=headB; //now for the 2nd Linked list
        while(temp!=NULL)
        {
            //Each has a unique address
            if(visit.count(temp)) return temp;
            temp = temp->next;
        }
        return 0;
    }
// Optimal Solution: 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visit;
        ListNode *temp=headA;
        while(temp!=NULL)
        {
            //Each has a unique address
            visit.insert(temp);
            temp = temp->next;
        }
        temp=headB; //now for the 2nd Linked list
        while(temp!=NULL)
        {
            //Each has a unique address
            if(visit.count(temp)) return temp;
            temp = temp->next;
        }
        return 0;
    }
};

};
