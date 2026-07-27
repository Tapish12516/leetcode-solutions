// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size();
//         int maxi = 0;
//         for(int i = 0 ; i < n-1 ; i++){
//             for(int j  = i+1 ; j < n ; j++){                        O(n^2)
//                 int temp = (nums[i]-1)*(nums[j]-1);
//                 maxi = max(maxi , temp);
//             }
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 0, max2 = 0;

        for(int num : nums){
            if(num > max1){
                max2 = max1;
                max1 = num;
            } else if(num > max2){
                max2 = num;
            }
        }

        return (max1 - 1) * (max2 - 1);
    }
};