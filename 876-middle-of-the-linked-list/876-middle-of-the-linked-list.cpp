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
    ListNode* middleNode(ListNode* head) {
        ListNode* shikhar=head;
        int cnt=0;
        while(shikhar!=NULL)
        {
            shikhar=shikhar->next;
            cnt++;
        }
        cnt=(cnt/2)+1;
        cout<<cnt<<endl;
       
        int k=1;
        while(k!=cnt)
        {
           
            head=head->next;
           
            k++;  
        }
        return head;
        
    }
};