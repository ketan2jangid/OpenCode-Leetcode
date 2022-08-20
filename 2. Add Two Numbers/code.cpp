//Iterative - using for loop
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* sum = new ListNode(0);
        ListNode* ptr = sum;
        
        ListNode* prev;
        while(l1 && l2){
            ptr->val = (l1->val+l2->val+carry)%10;
            carry = (l1->val+l2->val+carry)/10;
            
            prev = ptr;
            ptr = new ListNode;
            prev->next = ptr;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(!l1 && !l2 && carry==0){
            prev->next = NULL;
            return sum;
        }
        while(l1){
            ptr->val = (l1->val+carry)%10;
            carry = (l1->val+carry)/10;
            
            prev = ptr;
            ptr = new ListNode;
            prev->next = ptr;
            l1 = l1->next;
        }
        
        while(l2){
            ptr->val = (l2->val+carry)%10;
            carry = (l2->val+carry)/10;
            
            prev = ptr;
            ptr = new ListNode;
            prev->next = ptr;
            l2 = l2->next;
        }
        
        if(carry)
            ptr->val = carry;
        else
            prev->next = NULL;
        
        return sum;
    }
};

