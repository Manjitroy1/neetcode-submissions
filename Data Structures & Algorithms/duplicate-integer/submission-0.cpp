class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>stt;
        for(const int& e:nums){
            if(stt.count(e)) return true;
            stt.insert(e);
        }
        return false;
    }
};