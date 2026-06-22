class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> mapp;
        for(int i = 0 ; i < nums.size() ; i++){
            mapp[nums[i]]++;
        }
        int x = nums.size() / 2;
        for(int i = 0 ; i < nums.size() ; i++){
            if( mapp[nums[i]] > x ) return nums[i];
        }
        return nums[0];
    }
};