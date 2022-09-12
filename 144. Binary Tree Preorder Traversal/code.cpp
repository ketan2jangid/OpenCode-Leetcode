//recursive
//TC - O(n), SC - O(1)
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

//iterative
//TC - O(n), SC - O(n)
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root)    return ans;
        stack<TreeNode*> stk;
        
        stk.push(root);
        TreeNode* temp;
        while(!stk.empty()){
            temp = stk.top();
            stk.pop();
            
            ans.push_back(temp->val);
            
            if(temp->right) stk.push(temp->right);
            if(temp->left)  stk.push(temp->left);
        }
        
        return ans;
    }
};
