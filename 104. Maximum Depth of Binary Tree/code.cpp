//using recursion
class Solution {
public:
    int DepthOfTree = 0;
    int maxDepth(TreeNode* root) {
        if(!root)   return 0;
        int level = 0;
        dfs(root, level);
        
        return DepthOfTree;
    }
    
    void dfs(TreeNode* root, int depth){
        if(!root)   return;
        
        depth++;
        if(depth>DepthOfTree)
            DepthOfTree = depth;
        
        dfs(root->left, depth);
        dfs(root->right, depth);
    }
};
