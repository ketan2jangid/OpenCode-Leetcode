//Number of set bits should be 1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        
        return __builtin_popcount(n)==1;
    }
};

//We can also use loop or log, just like we did in Power of 3
