//time complexity - O(n)
class Solution {
public:
    int count = 0;
    int goodNodes(TreeNode* root) {
        int max = root->val;
        
        countgood(root,max);
        
        return count;
    }
    
    void countgood(TreeNode* root, int max){
        if(max<=root->val){
            max = root->val;
            count++;
        }
        
        if(root->left)
            countgood(root->left, max);
        if(root->right)
            countgood(root->right, max);
    }
};
