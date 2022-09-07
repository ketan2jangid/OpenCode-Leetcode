//iterative
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* ptr1, ListNode* ptr2) {
        if(!ptr1)  return ptr2;
        if(!ptr2)  return ptr1;
        
        ListNode* next1 = ptr1->next;
        ListNode* next2 = ptr2->next;
        ListNode* head = NULL;
        
        ListNode* temp = NULL;
        while(ptr1 && ptr2){
            next1 = ptr1->next;
            next2 = ptr2->next;
            
            if(temp==NULL){
                if(ptr1->val <= ptr2->val){
                    head = temp = ptr1;
                    ptr1 = ptr1->next;
                }else{
                    head = temp = ptr2;
                    ptr2 = ptr2->next;
                }
            }else{
                if(ptr1->val <= ptr2->val){
                    temp->next = ptr1;
                    ptr1 = ptr1->next;
                }else{
                    temp->next = ptr2;
                    ptr2 = ptr2->next;
                }
                temp = temp->next;
            }
        }
        
        if(!ptr1)   temp->next = ptr2;
        if(!ptr2)   temp->next = ptr1;
        
        return head;
    }
};
