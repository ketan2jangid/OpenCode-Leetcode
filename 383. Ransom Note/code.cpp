//using sort - O(n*logn)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        if(ransomNote.size()>magazine.size())
            return false;
        
        int l = 0; 
        int r = 0;
        while(l<ransomNote.size()){
            if(r==magazine.size())
                return false;
            if(ransomNote[l]==magazine[r]){
                l++;
                r++;
            }else if(magazine[r]>ransomNote[l])
                return false;
            else
                r++;
        }
        
        return true;
    }
};

//using frequency array
//TC - O(n), SC - O(n)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26);
        
        int n = ransomNote.length();
        int len = magazine.length();
        
        if(len<n)   return false;
        
        for(auto c: magazine)
            freq[c-'a']++;
        for(auto c: ransomNote)
            freq[c-'a']--;
        
        for(auto x: freq)
            if(x<0)
                return false;
        
        return true;
    }
};
