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
         ListNode * ptr1 = head;
         if(ptr1 == NULL) return head;
         ListNode *ptr2 = ptr1->next;
         while(ptr2 != NULL){
             int x = ptr1->val;
             ptr1->val = ptr2->val;
             ptr2->val = x;
             ptr1 = ptr2->next;
             ptr2 = (ptr1 != NULL)? ptr1->next:NULL;
         }
        return head;
    
    }
};