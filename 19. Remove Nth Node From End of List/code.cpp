//using count i.e. counting total nodes in list
//TC - O(n), SC - O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* ptr = head;
        
        while(ptr){
            count++;
            ptr = ptr->next;
        }
        
        count -= n;
        if(count==0)
            return head->next;
        
        ptr = head;
        for(int i=1; i<count; i++)
            ptr = ptr->next;
        
        ptr->next = ptr->next->next;
        
        return head;
    }
};

//using stack
//TC - O(N), SC -O(N)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        stack<ListNode*> stk;
        ListNode* ptr = head;
        
        while(ptr){
            stk.push(ptr);
            ptr = ptr->next;
        }
        
        if(n==stk.size())   return head->next;
        
        while(n--)
            stk.pop();
        
        stk.top()->next = stk.top()->next->next;
        
        return head;
    }
};

//using recursion
//TC - O(n), SC - O(1)
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int& n) {
        if(!head)   return NULL;
        
        head->next = removeNthFromEnd(head->next,n);
        n--;
        
        if(n==0)    return head->next;
        
        return head;
    }
};
