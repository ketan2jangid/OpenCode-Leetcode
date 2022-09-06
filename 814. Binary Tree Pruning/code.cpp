//using helper function which will tell if we can prune the left and right subtree
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        bool remove = prune(root);
        
        if(remove)  return NULL;
        
        return root;
    }
    
    bool prune(TreeNode* root){
        if(!root)   return true;
        
        bool left = prune(root->left);
        bool right = prune(root->right);
        
        if(left)    root->left = NULL;
        if(right)   root->right = NULL;
        
        if((left && right) && root->val==0)
            return true;
        
        return false;
    }
};

//without helper function, using resursion
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)   return NULL;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if((!root->left && !root->right) && !root->val)
            return NULL;
        
        return root;
    }
};
