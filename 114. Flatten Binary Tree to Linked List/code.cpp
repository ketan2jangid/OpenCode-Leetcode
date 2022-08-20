//Using O(n) extra space
class Solution {
public:
    vector<TreeNode*> flat;
    void flatten(TreeNode* root) {
        if(!root)   return;
        
        preorder(root);
        
        int n = flat.size();
        flat[0]->left = NULL;
        
        if(n==1)    flat[0]->right = NULL;
        else        flat[0]->right = flat[1];
        for(int i=1; i<n; i++){
            flat[i]->left = NULL;
            if(i==n-1)  flat[i]->right = NULL;
            else        flat[i]->right = flat[i+1];
        }
    }
    
    void preorder(TreeNode* root){
        if(!root)
            return;
        
        flat.push_back(root);
        preorder(root->left);
        preorder(root->right);
    }
};

