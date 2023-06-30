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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if(list1 && list2) {
            if(list1->val < list2->val) {
                swap(list1, list2);
            }
        } else if(list1) {
            return list1;
        } else {
            return list2;
        }
        ListNode *r = list2;
        while(list1 && list2->next) {
            if(list2->next && (list1->val < list2->next->val)) {
                swap(list2->next, list1);
            }
            list2 = list2->next;
        }
        if(!list2->next) {
            list2->next = list1;
        }
        return r;
    }
};