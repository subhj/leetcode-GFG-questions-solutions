
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         
         ListNode *fst = head;
           ListNode *slw = head;
           if(head!=NULL)
           while(fst!=NULL && fst->next!=NULL){
               fst=fst->next->next;
               slw=slw->next;
           }

           head =slw;
           return head;


    }
};
