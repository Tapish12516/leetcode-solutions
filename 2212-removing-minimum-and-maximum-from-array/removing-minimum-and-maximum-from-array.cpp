class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int n = nums.size();
        int i;
        for (i = 0; i < n; i++) {
            if (nums[i] == mn || nums[i] == mx)  break;
        }
        int j;
        for (j = n - 1; j >= 0; j--) {
            if (nums[j] == mn || nums[j] == mx)  break;
        }
        int left = j + 1;
        int right = n - i;
        int both = (i + 1) + (n - j);
        right = min(right, both);
        return min(left, right);
    }
};

// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int min = *min_element(nums.begin() , nums.end());
//         int max = *max_element(nums.begin() , nums.end());
//         int i = 0;
//         int n = nums.size();
//         for(i = 0 ; i < nums.size(); i++){
//             if(nums[i] == min || nums[i] == max) break;
//         }
//         if(i > n-1-i) return n-i;
//         else{
//             int j = i+1;
//             for(j = i ; j < n ; j++){
//                 if(nums[j] == min || nums[j] == max) break;
//             }
//             if(j-i <= n-j-1) return j+1;
//             else return n-j;
//         }
//         return 1;
//     }
// };
