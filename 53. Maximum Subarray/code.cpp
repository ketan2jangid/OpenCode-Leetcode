//time complexity - O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = nums[0];
        int sum = nums[0];
        
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i]+sum)
                sum = nums[i];
            else
                sum += nums[i];
            
            if(sum>maxsum)
                maxsum = sum;
        }
        
        return maxsum;
    }
};
