class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size() == 1 || nums.size() == 0) return;

        unordered_map<int , int> mapp;

        int count =0;
        for(int i = 0 ; i < nums.size() ; i++){
            mapp[i] = nums[i];
            if(nums[i] == 0) count++;
        }
        nums.clear();
        int x;
        for(int i = 0 ; i < mapp.size() ; i++){
            if(mapp[i] != 0) nums.push_back(mapp[i]);
            else {x = i;}
        }  
        for(int i = 0 ; i < count ; i++){
            nums.push_back(mapp[x]);
        }
    }
};