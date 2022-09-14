//recursive
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        long long max = LLONG_MAX;
        long long min = LLONG_MIN;
        
        return validate(root, min, max);
    }
    
    bool validate(TreeNode* root, long long& min, long long& max){
        if(!root)   return true;
        
        if(root->val>=max || root->val<=min)
            return false;
        
        long long update = (long long)root->val;
        
        return validate(root->left, min, update) && validate(root->right, update, max);
    }
};
