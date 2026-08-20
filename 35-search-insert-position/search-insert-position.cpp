class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0 , high = nums.size()-1;
        int mid;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         for(int i = 0 ; i < nums.size() ; i++){
//             if ( nums[i] == target ) return i;
//             if(nums[i] > target) return i;                                  //can be done in O(N) but interviewer demands log(n) 
//         }
//         return nums.size();
//     }
// };


//array is sorted 
//so we will use binary search to find the targeted index
