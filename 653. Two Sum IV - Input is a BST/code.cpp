//using extra space
//TC - O(n), SC - O(n)
class Solution {
public:
    vector<int> bst;
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        
        int l = 0;
        int r = bst.size()-1;
        while(l<r){
            if(bst[l]+bst[r]==k)    return true;
            else if(bst[l]+bst[r]<k)    l++;
            else                    r--;
        }
        
        return false;
    }
    
    void inorder(TreeNode* root){
        if(!root)   return;
        
        inorder(root->left);
        bst.push_back(root->val);
        inorder(root->right);
    }
};
