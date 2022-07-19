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
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
       ListNode* shikhar;
        
        if(list1->val<=list2->val)
        {
            shikhar=list1;
            list1=list1->next;
        }
        else
        {
            shikhar=list2;
            list2=list2->next;
                
        }
        ListNode* mayank=shikhar;
        while(list1&&list2)
        {
            if(list1->val<=list2->val)
            {
                shikhar->next=list1;
                shikhar=shikhar->next;
                list1=list1->next;
            }
            else
            {
                shikhar->next=list2;
                shikhar=shikhar->next;
                list2=list2->next;                
            }
        }
            while(list1)
            {
                shikhar->next=list1;
                shikhar=shikhar->next;
                list1=list1->next;
            }
            while(list2)
            {
                shikhar->next=list2;
                shikhar=shikhar->next;
                list2=list2->next;
            }
        return mayank;
        }
    
};