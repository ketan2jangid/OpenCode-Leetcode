//TC - O(n)
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root)    return ans;
        
        preorder(root);
        
        return ans;
    }
    
    void preorder(TreeNode* root){
        if(!root)   return;
        
        ans.push_back(root->val);
        
        preorder(root->left);
        preorder(root->right);
    }
};
