//Using loop 
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        
        while(n!=1){
            if(n%3!=0)  return false;
            n /= 3;
        }
        
        return true;
    }
};

//Using log
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        
        int exp = log2(n)/log2(3);
        
        return pow(3,exp)==n;
    }
};
