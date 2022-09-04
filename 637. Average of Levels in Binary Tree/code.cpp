//using bfs - level order traversal
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> avglevel;
        long long sum = 0;
        queue<TreeNode*> q;
        long long count = 1;
        q.push(root);
        
        TreeNode* temp;
        long long nodes = q.size();
        while(!q.empty()){
            temp = q.front();
            q.pop();
            count--;
            
            sum += temp->val;
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
            if(count==0){
                avglevel.push_back(1.0*sum/nodes);
                nodes = count = q.size();
                sum = 0;
            }
        }
        
        return avglevel;
    }
};
