//using stack
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)   return head;
        
        ListNode* ptr = head;
        int count = 0;
        
        stack<ListNode*> s;
        while(ptr){
            s.push(ptr);
            count++;
            ptr = ptr->next;
        }
        
        k %= count;
        if(k==0)    return head;
        
        s.top()->next = head;
        while(k--){
            ptr = s.top();
            s.pop();
        }
        s.top()->next = NULL;
        head = ptr;
        
        return head;
    }
};
