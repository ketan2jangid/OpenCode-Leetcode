//Breadth First Search
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)   return {};
        
        vector<vector<int>> ans;
        queue<Node*> q;
        q.push(root);
        int count = 1;
        
        vector<int> level;
        Node* temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            count--;
            
            level.push_back(temp->val);
            for(int i=0; i<temp->children.size(); i++)
                q.push(temp->children[i]);
            
            if(count==0){
                count = q.size();
                ans.push_back(level);
                level.clear();
            }
        }
        
        return ans;
    }
};
