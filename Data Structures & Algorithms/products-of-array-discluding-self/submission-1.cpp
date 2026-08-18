class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        
        int pre=1;
        for(int i=1;i<n;i++){
            ans[i] = pre*nums[i-1];
            pre=ans[i];
        }
        int suff=1;
        for(int j=n-2;j>=0;j--){
            suff*=nums[j+1];
            ans[j]*=suff;
        }
        return ans;
    }
};
