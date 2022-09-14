//bruteforce
//TC - O(n*m), SC - O(1)
//TLE


//using sort
//TC - O(n*logn), SC - O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s==t;
    }
};

//using frequency or count array (or map)
//TC - O(n), SC - O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26);
        
        for(auto c: s)
            freq[c-'a']++;
        for(auto c: t)
            freq[c-'a']--;
        
        for(auto x: freq)
            if(x!=0)
                return false;
        
        return true;
    }
};
