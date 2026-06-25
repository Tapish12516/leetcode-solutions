class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0 ;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                count++;
                maxi = max( count , maxi);
            } else {
            count = 0 ;
            }
        }
        return maxi;
    }
};

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = 0;
//         int ans = 0;

//         for(int num : nums) {                                                               //better readability
//             if(num == 1)
//                 count++;
//             else
//                 count = 0;

//             ans = max(ans, count);
//         }

//         return ans;
//     }
// };

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int count = (nums[0] == 1)? 1 : 0;
//         int n = nums.size();
//         if ( n==0 ) return 0;
//         int maxcount = count;
//         for(int i = 1; i < n ; i++){
//             if ( nums[i-1] == 1 && nums[i] == 1) count++;

//             else if( nums[i] == 1) count =1;                                     //TC = O(N) sc = O(1)

//             else count=0;

//             maxcount = max(count, maxcount);

//         }
//         return maxcount;
//     }
// };