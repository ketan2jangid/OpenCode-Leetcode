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

//recursive
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)   return head;
        
        remove(head, head->next);
        
        return head;
    }
    
    void remove(ListNode* ptr, ListNode* ahead){
        if(!ahead){
            ptr->next = ahead;
            return;
        }
        
        if(ptr->val!=ahead->val){
            ptr->next = ahead;
            ptr = ptr->next;
        }
        
        return remove(ptr, ahead->next);
    }
};
