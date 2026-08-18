class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return ""; 
        string res="";
        for(const string& str:strs){
            int sz= str.size();
            res+=to_string(sz);
            res.push_back(',');
        }
        res.push_back('#');

        for(const string& str:strs){
            res+=str;
        }
        return res;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string>ans;
        int l=0;
        int r=0;
        while(s[r]!='#'){
            r++;
        }
        int start=r+1;
        int num=0;
        while(l<r){
            while(l<r && s[l]!=','){
                num*=10;
                num+=(s[l]-'0');
                l++;
            }
            //i have the length of the string
            string str=s.substr(start,num);
            start+=num;
            ans.push_back(str);
            l++;
            num=0;
        }
        return ans;
    }
};
