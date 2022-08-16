//Using Hashmap - O(n)
class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        map<char,int> m;
        
        int ind = -1;
        for(int i=0; i<len; i++)
            m[s[i]]++;
        
        for(int i=0; i<len; i++){
            if(m[s[i]]==1){
                ind = i;
                break;
            }
        }
        
        return ind;
    }
};

//Using frequency or count array - O(n)
class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        vector<int> freq(26,0);
        
        int ind = -1;
        for(int i=0; i<len; i++)
            freq[s[i]-'a']++;
        
        for(int i=0; i<len; i++){
            if(freq[s[i]-'a']==1){
                ind = i;
                break;
            }
        }
        
        return ind;
    }
};
