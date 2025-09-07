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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp,*prev,*front;
        temp=head;prev=NULL;
        while(temp!=NULL)
        {
            front = temp->next;//first Move front to the next node
            temp->next=prev; //Then Reverse the direction i.e. point to prev
            prev=temp; //move the prev to temp
            temp=front; //move the temp
        }return prev;
    }
};
//Check Out Strivers Video;
