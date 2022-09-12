//recursive
//TC - O(n), SC - O(1)
class Solution {
public:
    vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        
        return ans;
    }
    
    void postorder(TreeNode* root){
        if(!root)   return;
        
        postorder(root->left);
        postorder(root->right);
        
        ans.push_back(root->val);
    }
};
