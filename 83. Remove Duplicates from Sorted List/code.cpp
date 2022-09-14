//iterative
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)   return head;
        
        ListNode* ptr = head;
        ListNode* ahead = head->next;
        while(ahead){
            if(ahead->val!=ptr->val){
                ptr->next = ahead;
                ptr = ptr->next;
            }
            ahead = ahead->next;
        }
        ptr->next = ahead;
        
        return head;
    }
};
