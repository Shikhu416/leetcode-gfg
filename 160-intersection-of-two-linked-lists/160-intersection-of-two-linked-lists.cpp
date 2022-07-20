/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *i, ListNode *j) {
        unordered_set<ListNode*>s;
       while(i!=NULL)
       {
           s.insert(i);
           i=i->next;
       }
        ListNode* temp=j;
        while(temp!=NULL)
        {
            if(s.find(temp)!=s.end())
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
       
        
    }
};