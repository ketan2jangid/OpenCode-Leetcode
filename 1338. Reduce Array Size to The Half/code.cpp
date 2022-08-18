//Using frequency array + sort - O(nlogn)
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int count = 1;
        vector<int> freq;
        for(int i=1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                freq.push_back(count);
                count = 1;
            }else
                count++;
        }
        freq.push_back(count);
        
        
        sort(freq.begin(), freq.end(), greater<int>());
        count = 0;
        int remove = 0;
        for(auto x: freq){
            if(2*remove>=n)
                break;
            count++;
            remove += x;
        }
        
        return count;
    }
};
