class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};


        // int left = 0 ;
        // int right = nums.size()-1 ;
        // int k =0;
        // while(left<=right){
        //     if(nums[left] == val && nums[right] != val) {
        //         swap(nums[left] , nums[right]);
        //         k++;
        //         left++;
        //         right--;
        //     }
        // }
        // return nums.size()-k; 



        // int n = nums.size();
        // for(int i = 0 ; i < n ;){
        //     if(nums[i] == val) nums.erase( nums.begin() + i );               //worst case TC = O(n^2)
        //     else {i++;}
        // }
        // return nums.size();