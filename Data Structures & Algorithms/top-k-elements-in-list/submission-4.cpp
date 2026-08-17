class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        return a[0]>b[0];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        using t=pair<int,int>;
        priority_queue<t>pq;

        for(const int& num:nums){
            freq[num]++;
        }
        vector<int>ans;
        for(const auto& e:freq){
            pq.push({e.second,e.first});
        }
        // sort(store.rbegin(),store.rend());

        // int n=store.size();
        // for(int i=0;i<min(n,k);i++){
        //     ans.push_back(store[i][1]);
        // }

        while(k--){
            const auto node = pq.top();
            pq.pop();
            ans.push_back(node.second);
        }
        return ans;
    }
};
