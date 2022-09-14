//using recursion
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)   return false;
        
        targetSum -= root->val;
        
        if(!root->left && !root->right && targetSum==0)  return true;
        
        bool left = false;
        if(root->left)
            left = hasPathSum(root->left, targetSum);
        
        bool right = false;
        if(root->right)
            right = hasPathSum(root->right, targetSum);
        
        return left|right;
    }
};
