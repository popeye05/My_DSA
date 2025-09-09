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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy;
        dummy.next = head;
        ListNode *temp=head;
        while(temp != NULL && temp->next !=NULL)
        {
            if((temp->val== (temp->next)->val)) //that means occured
            {
                temp->next = (temp->next)->next; //Link removed
            }
            else temp=temp->next;
        }
        return head;
    }
};
