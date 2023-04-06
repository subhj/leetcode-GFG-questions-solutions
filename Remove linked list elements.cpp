class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode *ptr = head;
        if(head==NULL)
            return NULL;
        
        while(ptr!= NULL && ptr->val==val){
                ptr=ptr->next;
            }

        if(ptr==NULL){
            return NULL;
        }
        ListNode *q = ptr;
        while(q->next!=NULL){
            if(q->next->val==val){
                q->next=q->next->next;
            }
            else{
               q=q->next;
            }
        }
        return ptr;
    }
};
