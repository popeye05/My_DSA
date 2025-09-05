/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> freq;
        ListNode* temp;
        temp=head;
        while(temp!=NULL)
        {
            if(freq.count(temp)) return true;
            freq[temp]=1;
            temp = temp->next;

        } return false;
    }
};
//This is a brute force approach, On  submission Youll see that it only beats ~11.75% 
//Optimal Solution: Floyd Cycle Detection

class Solution {
public:
    bool hasCycle(ListNode *head) {
     ListNode *slow,*fast;//Tortoise and Hare
     //Tortoise can go only 1 step at a time
    // But the Hare can go 2 steps:
    slow=head,fast=head;
     while(fast!=NULL && fast->next !=NULL)
     {
        slow=slow->next;
        fast=(fast->next)->next;
        if(slow==fast) return true;
     }return false;
    }
};
