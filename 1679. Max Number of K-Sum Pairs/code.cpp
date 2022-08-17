//Using Hashmap - O(n)
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> m;
        
        int count = 0;
        for(auto x: nums){
            if(m[k-x]>0){
                m[k-x]--;
                count++;
            }else{
                m[x]++;
            }
        }
        
        return count;
    }
};
