//using count variable
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* ptr = head;
        
        while(ptr){
            count++;
            ptr = ptr->next;
        }
        
        ptr = head;
        for(int i=0; i<count/2; i++)
            ptr = ptr->next;
        
        return ptr;
    }
};

//using fast and slow pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(!head || !head->next)    return head;
        
        ListNode* ptr = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            fast = fast->next;
            if(fast->next)
                fast = fast->next;
            ptr = ptr->next;
        }
        
        return ptr;
    }
};
