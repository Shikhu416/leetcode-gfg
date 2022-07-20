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
       while(i!=NULL)
       {
          ListNode *temp=j;
           while(temp!=NULL)
           {
               if(temp==i)
                   return i;
               temp=temp->next;
           }
           i=i->next;
       }
        return NULL;
       
        
    }
};