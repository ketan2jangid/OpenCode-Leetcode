//Sort + 3 pointers - O(n^2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> triplets;
        
        sort(nums.begin(), nums.end());
        
        int l,r;
        for(int i=0; i<n-2; i++){
            while(i>0 && nums[i]==nums[i-1]){
                i++;
                if(i>=n)    break;
            }
            l = i+1;
            r = n-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r]==0){
                    triplets.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    
                    while(l<r && nums[l-1]==nums[l])
                        l++;
                    while(r>l && nums[r+1]==nums[r])
                        r--;
                }else if(nums[i]+nums[l]+nums[r]<0){
                    l++;
                    while(l<r && nums[l]==nums[l-1])
                        l++;
                }else{
                    r--;
                    while(r>l && nums[r+1]==nums[r])
                        r--;
                }
            }
        }
        
        return triplets;
    }
};

