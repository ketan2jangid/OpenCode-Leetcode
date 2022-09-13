//using recursion
//TC - O(n*logn)
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)   return NULL;
        
        if(root->val==val)  return root;
        else if(root->val<val)  return searchBST(root->right, val);
        
        return searchBST(root->left, val);
    }
};
