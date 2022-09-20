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
