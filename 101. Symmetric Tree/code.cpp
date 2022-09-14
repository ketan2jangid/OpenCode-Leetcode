//recursive
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root->left, root->right);
    }
    
    bool check(TreeNode* left, TreeNode* right){
        if(left==right && right==NULL)  return true;
        
        if(!left || !right) return false;
        
        return ( (left->val==right->val) && check(left->left, right->right) && check(left->right, right->left) );
    }
};
