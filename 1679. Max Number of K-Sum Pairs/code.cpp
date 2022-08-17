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

//Using two pointers - O(n)
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count= 0;
        
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = n-1;
        while(l<r){
            if(nums[l]+nums[r]==k){
                count++;
                l++;
                r--;
            }else if(nums[l]+nums[r]<k)
                l++;
            else
                r--;
        }
        
        return count;
    }
};
