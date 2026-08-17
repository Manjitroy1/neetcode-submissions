class Solution {
public:
static bool comp(vector<int>&a, vector<int>&b){
        return a[0]>b[0];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;

        for(const int& num:nums){
            freq[num]++;
        }
        vector<vector<int>>store;
        vector<int>ans;
        for(const auto& e:freq){
            store.push_back({e.second,e.first});
        }
        sort(store.begin(),store.end(),comp);

        int n=store.size();
        for(int i=0;i<min(n,k);i++){
            ans.push_back(store[i][1]);
        }
        return ans;
    }
};
