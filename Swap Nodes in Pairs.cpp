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
    ListNode* swapPairs(ListNode* head) {
       if(head==NULL || head->next == NULL){
           return head;
       }
          ListNode* curr = head;
          ListNode* a = curr->next;
           ListNode* prev = NULL;
         

          while(curr!=NULL && curr->next!=NULL){
              ListNode* B = curr->next;
              ListNode* C = B->next;
              
              B->next = curr;
              curr->next = C;
              if(prev!=NULL){
                  prev->next = B;
              }
              prev = curr;
              curr = C;

          }
        return a;
    }
};
