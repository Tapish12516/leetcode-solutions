class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;

            if(mp[num] > 1)
                return true;
        }

        return false;
    }
};


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int , int > mapp;
//         for(int i = 0; i < nums.size() ; i++){
//             mapp[nums[i]]++;
//         }                                                                    // TC and SC = O(N)
//         for(int i = 0; i < nums.size() ; i++){                               // build full map and then traverses again 
//             if(mapp[nums[i]] >= 2) return true;
//         }
//         return false;
//     }
// };
