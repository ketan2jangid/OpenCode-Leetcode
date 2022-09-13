//bfs - using queue
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<int> level;
        vector<vector<int>> ans;
        
        if(!root)   return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        int count = 1;
        
        TreeNode* temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            count--;
            
            level.push_back(temp->val);
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
            if(count==0){
                count = q.size();
                ans.push_back(level);
                level.clear();
            }
        }
        
        return ans;
    }
};
