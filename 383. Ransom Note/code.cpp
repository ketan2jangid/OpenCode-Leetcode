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
