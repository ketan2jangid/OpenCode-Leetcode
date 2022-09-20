//TC - O(n)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int l = -1;
        int r;
        for(int i=n-1; i>0; i--){
            if(nums[i-1]<nums[i]){
                l = i-1;
                break;
            }
        }
        
        if(l==-1){
            sort(nums.begin(), nums.end());
            return;
        }
        
        for(int i=n-1; i>=0; i--){
            if(nums[i]>nums[l]){
                r = i;
                break;
            }
        }
        
        swap(nums[l], nums[r]);
        
        sort(nums.begin()+l+1, nums.end());
    }
};
