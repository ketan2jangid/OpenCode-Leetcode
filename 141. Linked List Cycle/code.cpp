//using slow & fast pointers
//TC - O(n), SC - O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)   return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        bool flag = false;
        while(fast->next){
            fast = fast->next;
            if(fast->next)
                fast = fast->next;
            else
                return false;
            slow = slow->next;
            
            if(slow==fast){
                flag = true;
                break;
            }
        }
        
        return flag;
    }
};

//using sets
//TC - O(n), SC - O(n)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)   return false;
        
        set<ListNode*> s;
        ListNode* ptr = head;
        while(ptr){
            if(s.find(ptr)!=s.end())    return true;
            s.insert(ptr);
            
            ptr = ptr->next;
        }
        
        return false;
    }
};
