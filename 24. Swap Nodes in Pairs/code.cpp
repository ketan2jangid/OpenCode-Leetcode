//iterative
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)   return head;
        
        ListNode* prev = NULL;
        ListNode* first = head;
        ListNode* nxt;
        
        while(first && first->next){
            nxt = first->next;
            
            first->next = nxt->next;
            nxt->next = first;
            if(prev==NULL){
                head = nxt;
                prev = first;
            }else{
                prev->next = nxt;
                prev = first;
            }
            
            first = first->next;
        }
        
        return head;
    }
};

//recursive
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)    return head;
        
        ListNode* first = head;
        ListNode* second = head->next;
        
        first->next = second->next;
        second->next = first;
        head = second;
        
        first->next = swapPairs(first->next);
        
        return head;
    }
};
