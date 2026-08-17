class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int req= target-first;
            if(mpp.count(req)){
                return {mpp[req],i};
            }
            mpp[first]=i;
        }
        return {0,0};
    }
};
