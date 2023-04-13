
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         ListNode *tail =head;
         ListNode *strt =head;
          
          while(tail!=NULL && tail->next!=NULL){
              tail=tail->next->next;
              strt = strt->next;
              if(tail==strt){

              strt = head;
              while(strt!=tail){
                  strt=strt->next;
                  tail=tail->next;
              }
              return strt;
              }
          }
          return NULL;

        
    }
};
