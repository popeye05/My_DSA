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
//This is an Amazing Solution I Learned, I originally did the brute force one , which I've not added here because this one is too  good!
//Shoutout: Nikhil Lohia for sharing this Wonderful Solution!
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    ListNode *hare=head, *tortoise=head;
      while(hare != nullptr && hare->next != nullptr)
      {
       tortoise =tortoise->next;  //This Moves Once 
        hare=(hare->next)->next; //This Moves Twice
      }  
      return tortoise;
    }
};
