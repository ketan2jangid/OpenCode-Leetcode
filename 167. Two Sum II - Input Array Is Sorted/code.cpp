//Using two pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> pos;
        
        int l = 0;
        int r = n-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                pos.push_back(l+1);
                pos.push_back(r+1);
                break;
            }else if(numbers[l]+numbers[r]<target)
                l++;
            else
                r--;
        }
        
        return pos;
    }
};

//We can also use hashmap here, like we did in Two Sum
