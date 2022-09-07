//BFS + hashmap
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> m;
        queue<pair<TreeNode*,int>> q;
        vector<vector<int>> ans;
        q.push({root,0});
        
        TreeNode* temp;
        int ind = 0;
        int level = 0;
        int count = 1;
        while(!q.empty()){
            temp = q.front().first;
            ind = q.front().second;
            q.pop();
            count--;
            
            m[ind][level].push_back(temp->val);
            if(temp->left)
                q.push({temp->left,ind-1});
            if(temp->right)
                q.push({temp->right, ind+1});
            
            if(count==0){
                level++;
                count = q.size();
            }
        }
        
        for(auto p: m){
            vector<int> v;
            for(auto lvls: p.second){
                sort(lvls.second.begin(), lvls.second.end());
                for(auto x: lvls.second)
                    v.push_back(x);
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};
