//bruteforce - O(n^2) - TLE

//keeping track of min cost i.e. day of buying the stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int maxProfit = 0;
        int buy = INT_MAX;
        for(auto x: prices){
            if(x<buy)
                buy = x;
            if(x-buy>maxProfit)
                maxProfit = x-buy;
        }
        
        return maxProfit;
    }
};
