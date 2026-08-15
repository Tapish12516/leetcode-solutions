// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int n = nums.size();
//         int totalXor = 0;
//         for (int i = 0; i < n; i++) {
//             totalXor ^= nums[i];
//         }
//         if (totalXor != 0) {
//             return n;
//         }
//         for (int i = 0; i < n; i++) {
//             int xr = 0;
//             for (int j = 0; j < n; j++) {
//                 if (i != j) {
//                     xr ^= nums[j];                          //O(n^2) solution
//                 }
//             }
//             if (xr != 0) {
//                 return n - 1;
//             }
//         }
//         return 0;
//     }
// };



class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xr = 0;
        bool nonZero = false;

        for (int x : nums) {
            xr ^= x;

            if (x != 0)
                nonZero = true;
        }
                                                                //O(N) solution
        if (xr != 0)
            return nums.size();

        if (nonZero)
            return nums.size() - 1;

        return 0;
    }
};