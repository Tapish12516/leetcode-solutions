class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int > mapp;
        for(int i = 0; i < nums.size() ; i++){
            mapp[nums[i]]++;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(mapp[nums[i]] >= 2) return true;
        }
        return false;
    }
};