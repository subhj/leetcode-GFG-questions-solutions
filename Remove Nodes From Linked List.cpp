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
    ListNode* removeNodes(ListNode* head) {
       if(head==NULL||head->next== NULL){
           return head;
       }
       
        ListNode *p =head;
        vector<int>s;
        while(p!=NULL){
            while( !s.empty()   && s.back()<p->val ){
                  s.pop_back();
            }
            s.push_back(p->val);
            p=p->next;
        }

        ListNode* q= head;
        p=head;
        for(auto&i:s){
            p->val =i;
            q=p;
            p=p->next;
        }
        q->next =NULL;
        return head;
    }
};
