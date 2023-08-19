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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;

        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]==NULL)
                continue;
            ListNode* head=lists[i];
            while(head!=NULL)
            {
                ans.push_back(head->val);
                cout<<head->val;
                head=head->next;
            }
        }
        sort(ans.begin(),ans.end());
        // cout<<ans.size();
        ListNode* head= new ListNode(0);
        ListNode* res=head;
        for(int i=0;i<ans.size();i++)
        {
            ListNode* tail= new ListNode(ans[i]);
           head->next=tail;
           head=tail;
        }
        return res->next;
    }
};