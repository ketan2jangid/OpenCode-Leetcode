class Solution {
public:
    string tree2str(TreeNode* root) {
        string toadd = to_string(root->val);
        
        if(root->right){            
            if(root->left)
                toadd = toadd + "(" + tree2str(root->left) + ")";
            else
                toadd += "()";
            toadd = toadd + "(" + tree2str(root->right) + ")";
        }else{
            if(root->left)
                toadd = toadd + "(" + tree2str(root->left) + ")";
        }
        
        return toadd;
    }
};
