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
        if(head==NULL||head->next==NULL)
           return NULL;
        int cnt=0;
        ListNode *shikhar=head;
        while(shikhar)
        {
            shikhar=shikhar->next;
            cnt++;
        }
        int k=cnt-n;
        if(k==0)
            return head->next;
        
        int p=1;
        ListNode *mayank=head;
        while(p<k)
        {
            mayank=mayank->next;
            p++;
        }
        mayank->next=mayank->next->next;
        return head;
        
    }
};