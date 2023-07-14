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
        ListNode* tail=head;
    vector<int> temp;
    while(tail!=NULL)
    {
        temp.push_back(tail->val);
        tail=tail->next;
    }
        tail=head;
    for(int i=temp.size()-1;i>=0;i--)
    {
        tail->val=temp[i];
        tail=tail->next;
        
    }
    return head;
    }
};