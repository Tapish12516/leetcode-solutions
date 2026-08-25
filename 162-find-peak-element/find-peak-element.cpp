class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int temp = *max_element(nums.begin() , nums.end());
        auto it = find(nums.begin(), nums.end(), temp);
        return it-nums.begin();
    }
};