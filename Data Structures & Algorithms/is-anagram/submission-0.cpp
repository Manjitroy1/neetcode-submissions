class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        vector<int>freq(26,0);
        for(const char& c:s){
            freq[c-'a']++;
        }
        for(const char& c:t){
            if(freq[c-'a']<=0) return false;
            freq[c-'a']--;
        }
        for(const int& v:freq){
            if(v!=0) return false;
        }
        return true;
    }
};
