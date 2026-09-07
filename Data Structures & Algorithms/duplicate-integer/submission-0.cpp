class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dt;
        for(int n: nums){
            dt[n]++;
        }

        for(auto j: dt) {
            if(j.second>1) return true;
        }

        return false;
    }
};