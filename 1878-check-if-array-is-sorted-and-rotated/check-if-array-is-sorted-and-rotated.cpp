class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if( nums[i] > nums[(i+1)%nums.size()] ) count++;
        }
        return count <= 1 ;
    }
};




        // if( is_sorted( nums.begin() , nums.end() ) ) return true;

        // for(int x = 0 ; x < nums.size() ; x++){                                // TC = O(N^2)
        //     vector<int> B(nums.size() , 0);                                    // SC = O(N)

        //     for(int i = 0; i < nums.size() ; i++){
        //     B[i] = nums[(i+x)%nums.size()];
        //     }

        //     if( is_sorted( B.begin() , B.end() ) ) return true;
        // }
        // return false;

        // 7/10 approach but not efficient as the complexities