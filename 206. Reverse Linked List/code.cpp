//iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)   return head;
        
        ListNode* prev = NULL;
        ListNode* temp;
        ListNode* ptr = head;
        
        while(ptr){
            temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        head = prev;
        
        return head;
    }
};

//recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)   return head;
        
        ListNode* prev = NULL;
        
        return reverse(prev,head);
    }
    
    ListNode* reverse(ListNode* prev, ListNode* ptr){
        if(!ptr)
            return prev;
        
        ListNode* temp = ptr->next;
        ptr->next = prev;
        
        return reverse(ptr, temp);
    }
};
