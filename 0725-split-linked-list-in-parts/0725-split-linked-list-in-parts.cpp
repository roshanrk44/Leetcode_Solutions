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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        if(head==NULL)
        {
return ans ;
        }
        ListNode* temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int num=count%k;
        int div=count/k,n;
        int i=0;
        
        while(count!=0)
        {
            
            if(num!=0)
            {
                
                n=div+1;
                num--;
                // cout<<div<<" ";
            }
            else
                n=div;
            ans[i]=head;
            i++;
            cout<<n;
            // cout<<count<<num;
            count=count-n;
            while(n>0)
            {
                if(n==1)
                {
                    ListNode* temp=head->next;
                    head->next=NULL;
                    head=temp;
                    n--;
                    continue;
                }
                head=head->next;
                n--;
            }
            
        }
        
        return ans;
    }
};