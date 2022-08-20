//Using stack
class Solution {
public:
    Node* flatten(Node* head) {
        if(!head)   return head;
        
        stack<Node*> nxt;
        Node* ptr = head;
        while(ptr){
            if(ptr->child){
                if(ptr->next!=NULL)
                    nxt.push(ptr->next);
                ptr->next = ptr->child;
                ptr->child->prev = ptr;
                ptr->child = NULL;
            }else if(!ptr->next){
                if(nxt.empty())
                    break;
                ptr->next = nxt.top();
                if(nxt.top())
                    nxt.top()->prev = ptr;
                nxt.pop();
            }
            
            ptr = ptr->next;
        }
        
        return head;
    }
};
