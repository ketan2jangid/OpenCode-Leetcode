//dfs backtracking
class Solution {
public:
    vector<vector<int>> sumpaths;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)   return sumpaths;
        
        vector<int> temp;
        dfs(root, targetSum,temp);
        
        return sumpaths;
    }
    
    void dfs(TreeNode* root, int targetsum, vector<int>& temp){
        if(!root)   return;
        
        targetsum -= root->val;
        temp.push_back(root->val);
        
        if(!root->left && !root->right && targetsum==0)
            sumpaths.push_back(temp);
        
        dfs(root->left, targetsum, temp);
        dfs(root->right, targetsum, temp);
        
        temp.pop_back();
    }
};
