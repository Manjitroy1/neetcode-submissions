class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>stt;
        for(const int& num:nums){
            stt.insert(num);
        }
        int ans=0;
        for(int elem:stt){
            int num=elem;
            if(stt.count(num-1)) continue;
            int cnt=0;
            while(stt.count(num)){
                cnt++;
                num++;
            }
            ans=max(cnt,ans);
        }
        return ans;
    }
};
