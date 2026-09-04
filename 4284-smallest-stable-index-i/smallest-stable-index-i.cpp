class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int mx = nums[0];
            int mn = nums[i];                                           //bruteforce approach best for given constraints
            for (int j = 0; j <= i; j++)  mx = max(mx, nums[j]);
            for (int j = i; j < n; j++)  mn = min(mn, nums[j]);
            if (mx - mn <= k)  return i;
        }
        return -1;
    }
};


// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int> right(n);
//         right[n - 1] = nums[n - 1];
//         for (int i = n - 2; i >= 0; i--)  right[i] = min(right[i + 1], nums[i]);
//         int left = 0;                                                                //optimal solution but O(N)  SC
//         for (int i = 0; i < n; i++) {
//             left = max(left, nums[i]);
//             if (left - right[i] <= k)  return i;
//         }
//         return -1;
//     }
// };