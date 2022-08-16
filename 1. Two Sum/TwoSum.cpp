//First Approach - Brute Force - O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> numPos;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                    numPos.push_back(i);
                    numPos.push_back(j);
                    break;
                }
            }
        }
        
        return numPos;
    }
};


//Second Approach - Hashmap - O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> numPos;
        
        for(int i=0; i<n; i++){
            if(m.find(target-nums[i])==m.end())
                m[nums[i]] = i;
            else{
                numPos.push_back(i);
                numPos.push_back(m[target-nums[i]]);
                break;
            }
        }
        
        return numPos;
    }
};
