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

//iterative
//TC - O(n), SC - O(n)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)   return {};
        
        vector<int> postorder;
        stack<TreeNode*> s;
        
        s.push(root);
        TreeNode* temp;
        
        while(!s.empty()){
            temp = s.top();
            s.pop();
            postorder.push_back(temp->val);
            
            if(temp->left)
                s.push(temp->left);
            if(temp->right)
                s.push(temp->right);
        }
        reverse(postorder.begin(), postorder.end());
        
        return postorder;
    }
};
