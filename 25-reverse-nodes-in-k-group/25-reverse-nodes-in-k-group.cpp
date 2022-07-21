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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1)
            return head;
        int cnt=0;
        ListNode* a=head;
        while(a!=NULL)
        {
            a=a->next;
            cnt++;
        }
         ListNode* curr=head,*prevhead=NULL;
        bool flag=true;
        while(cnt>=k)
        {ListNode* first=curr,*prev=NULL; 
         for(int i=0;i<k;i++)
         {
             ListNode* nexon=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nexon;
         }
         if(flag)
         {
             head=prev;
             flag=false;
         }
         else
         {
             prevhead->next=prev;
         }
         prevhead=first;
         cnt-=k;
        }
        
        while(curr)
        {
            prevhead->next=curr;
            curr=curr->next;
            prevhead=prevhead->next;
        }
        return head;
    }
};