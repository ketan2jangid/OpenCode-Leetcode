//bruteforce - O(m*n)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> ans;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        
        return ans;
    }
};

//using sort - O(n*logn)
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        int l = 0;
        int r = 0;
        
        vector<int> intersection;
        while(l<nums1.size() && r<nums2.size()){
            if(nums1[l]==nums2[r]){
                intersection.push_back(nums1[l]);
                l++;
                r++;
            }else if(nums1[l]<nums2[r])
                l++;
            else
                r++;
        }
        
        return intersection;
    }
};
