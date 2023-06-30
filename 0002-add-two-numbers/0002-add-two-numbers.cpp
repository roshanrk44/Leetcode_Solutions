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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* temp=l1;
        ListNode* b;
        if(l1==NULL&&l2==NULL)
        {
            return 0;
        }
        else if(l1==NULL)
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
        while(temp!=NULL&&l2!=NULL)
        {
            temp->val=temp->val+l2->val+carry;
             carry=(temp->val)/10;
            temp->val=(temp->val)%10;
           b=temp;
            temp=temp->next;
            l2=l2->next;
        }
        if(temp==NULL&&l2!=NULL)
        {
            b->next=l2;
            temp=l2;
            while(temp!=NULL)
            {
                temp->val=temp->val+carry;
                carry=(temp->val)/10;
            temp->val=(temp->val)%10;
            b=temp;
            temp=temp->next;
            }
        }
            else if(temp!=NULL&&l2==NULL)
            {
                while(temp!=NULL)
                {
                 temp->val=temp->val+carry;
                carry=(temp->val)/10;
            temp->val=(temp->val)%10;
            b=temp;
            temp=temp->next;
            }
            }
            if(carry!=0)
            {
               ListNode* a=new ListNode(carry);
               b->next=a;
            //    a->val=carry;
            //    temp->next=NULL;
            }
            
        
        return l1;
       


    }
};