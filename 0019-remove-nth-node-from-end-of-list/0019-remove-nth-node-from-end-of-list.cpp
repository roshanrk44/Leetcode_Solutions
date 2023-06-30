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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0,i=0;
        ListNode* temp=head;
        ListNode* temp1=head;
        if(head==NULL)
        {
            return 0;
        }
        
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if((count-n)==0)
        {
            head=head->next;
            return head;
        }
        else{
            while(temp1!=NULL&&i<(count-n))
            {
                if(i==(count-n-1))
                {
            ListNode* a=temp1->next;
            ListNode* b=a->next;
            temp1->next=b;
                }
                i++;
                temp1=temp1->next;
            }
        }
        return head;
    

    }
};