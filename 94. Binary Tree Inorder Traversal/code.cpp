//recursive
//TC - O(n), SC - O(1)
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        
        return ans;
    }
    void inorder(TreeNode* root){
        if(!root)   return;
        
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
};

//iterative 
//TC - O(n), SC - O(n)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack<TreeNode*> s;
        
        if(!root)   return inorder;
        s.push(root);
        TreeNode* ptr = root->left;
        
        while(!s.empty() || ptr){
            if(!ptr){
                ptr = s.top();
                s.pop();
                inorder.push_back(ptr->val);
                ptr = ptr->right;
            }else{
                s.push(ptr);
                ptr = ptr->left;
            }
        }
        
        return inorder;
    }
};
