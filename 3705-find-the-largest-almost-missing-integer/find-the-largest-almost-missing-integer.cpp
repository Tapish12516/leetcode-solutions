class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int , int> mapp;
        for(int i = 0 ;i <= nums.size() - k ; i++){
            int temp = i;
            for(int j = i; j < temp + k; j++) {
            bool alreadyPresent = false;
            for(int l = i; l < j; l++) {
                if(nums[l] == nums[j]) {
                    alreadyPresent = true;
                    break;
                }
            }
            if(alreadyPresent == false) {
            mapp[nums[j]]++;
            }
        }
        }
        int max = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mapp[nums[i]] == 1){
                if(nums[i] > max) max = nums[i];
            }
        }
        return max;
    }
};