class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);

        slow = nums[0];

        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};



        // sort(nums.begin() , nums.end());                                     //don't modify the given array
        // for(int i = 1; i < nums.size() ; i++){
        //     if(nums[i] == nums[i-1]) return nums[i];
        // }
        // return 0;