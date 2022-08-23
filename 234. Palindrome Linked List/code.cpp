//Using extra space - O(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> lst;
        ListNode* ptr = head;
        
        while(ptr){
            lst.push_back(ptr->val);
            ptr = ptr->next;
        }
        
        int l = 0;
        int r = lst.size()-1;
        while(l<r){
            if(lst[l]!=lst[r])
                return false;
            l++;
            r--;
        }
        
        return true;
    }
};

