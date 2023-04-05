class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode *ptr = head;
       if(head==NULL || head->next==NULL){
           return head;
       }
       while(ptr->next!=NULL){
           if(ptr->val==ptr->next->val){
             ptr->next=ptr->next->next;
           }else{
               ptr=ptr->next;
           }
       }
       return head;
    }
    
};
