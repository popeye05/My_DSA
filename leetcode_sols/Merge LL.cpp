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
//1st Solution. Very Naive and Optimal I Solved it exactly like the merging of sorted arrays........
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode head;     //Useful Because in its next part Im going to append the merged list!         
        ListNode* tail = &head;   //tail is pointing to head
        dummy.next = nullptr;
        while (list1 && list2) {
            if (list1->val < list2->val) { //just like merging two sorted arrays...we'll check
                tail->next = list1; //tail = list1 i.e i
                list1 = list1->next; //i++
            } else {
                tail->next = list2; //tail = list2 i.e. j
                list2 = list2->next; // j++
            }
            tail = tail->next; //tail++;
        }
            if (list1) tail->next = list1; //if list1 is not null i.e Remaining elements like merging two sorted arrays...
            if (list2) tail->next = list2;
            return head.next;  //(in dummy node  next ,the merged list's head address is stored, check the code....)
       
    }
};


