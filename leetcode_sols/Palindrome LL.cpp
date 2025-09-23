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
    bool isPalindrome(ListNode* head) {
     ListNode *hare=head,*tor=head;
     while (hare != NULL && hare->next != NULL)
     {
        hare=hare->next->next;
        tor=tor->next;
     }  
     //Middle of the linked list is the tortoise.
     ListNode* temp=tor,*front,*temp1,*temp2,*prev=NULL;
     while(temp!=NULL)
     {
        //Reverse:
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
     } 
     temp2=prev;
     temp1=head;
     while(temp1 &&temp2)
     {
        if (temp1->val !=temp2->val)return false;
        temp1=temp1->next;
        temp2=temp2->next;
     }return true;
    }
};
