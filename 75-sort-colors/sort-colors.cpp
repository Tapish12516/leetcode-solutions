class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c1 = 0 , c2 = 0 , c3 = 0 ;
        for(auto it:nums){
            if(it == 0) c1++;
            else if(it == 1) c2++;
            else c3++;
        }
        int index = 0 ; 
        while(c1--){
            nums[index++] = 0;
        }
        while(c2--){
            nums[index++] = 1;
        }
        while(c3--){
            nums[index++] = 2;
        }
    }
};