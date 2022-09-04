//using sort - O(klogk) (k = m+n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m, j=0; j<n; j++, i++)
            nums1[i] = nums2[j];
        
        sort(nums1.begin(), nums1.end());
    }
};

//in O(m+n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m-1, k=m+n-1; i>=0; i--, k--)
            nums1[k] = nums1[i];

        int i,j,k;
        i = n;
        j = k = 0;
        while(i<m+n && j<n){
            if(m && nums1[i]<nums2[j])
                nums1[k++] = nums1[i++];
            else
                nums1[k++] = nums2[j++];
        }

        while(j<n)
            nums1[k++] = nums2[j++];
    }
};
