//iterative
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)   return head;
        
        ListNode* ptr = head;
        while(ptr && ptr->val==val)
            ptr = ptr->next;
        
        head = ptr;
        if(!ptr)    return head;
        
        ListNode* temp = ptr->next;
        while(temp){
            if(temp->val!=val){
                ptr->next = temp;
                ptr = ptr->next;
            }
            temp = temp->next;
        }
        ptr->next = temp;
        
        return head;
    }
};
