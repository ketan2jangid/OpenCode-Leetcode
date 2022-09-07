//using recursion
class Solution {
public:
    string tree2str(TreeNode* root) {
        string toadd = to_string(root->val);
        
        if(root->left){
            toadd = toadd + "(" + tree2str(root->left) + ")";
        }
        if(root->right){
            toadd = toadd + "(" + tree2str(root->right) + ")";
        }
        
        return toadd;
    }
};
