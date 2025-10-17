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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (head && head->next) {
        
            ListNode* first = head;
            ListNode* second = head->next;
            prev->next = second;
            first->next = second->next;
            second->next = first;
           prev = first;
            head = first->next;
        }

        return dummy->next;
    }
};
//------------------------------------------------------------------
//Recursive Solution: 
   ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode * temp =head->next;
       head -> next= swapPairs(head->next->next);
       temp->next=head;
       return temp;
    }
//--------------------------------------------------------------------
