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
    ListNode* swapNodes(ListNode* head, int k) {
         
         ListNode* ptr = head;
         ListNode* q=head;
          ListNode* m=head;
          int count =1;
         while(m!=NULL){
            if(count<k){
              ptr=ptr->next;
            }
            if(count>k){
                q=q->next;
            }

           count++;
           m=m->next;

         }
         
            int temp = ptr->val;
                 ptr->val = q->val;
                 q->val = temp; 
           
       return head;
    }
};
