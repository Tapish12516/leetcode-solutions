class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> numbers;
        for(int i = 0 ; i < nums.size() ; i++){
            int comp = target - nums[i];
            if( numbers.find(comp) != numbers.end() ){                        //find function returns the iterator if it finds the value
                return {numbers[comp] , i};
            }
            numbers[nums[i]] = i;
        }
        return {};
    }
};                                                                          //O(N) TC and SC both



// if we are just asked that is there any two numbers which sum upto the target we can use the two pointer approach as well but for the indices we have to use the hashing approach

    //TWO POINTER APPROACH
    // sort(nums.begin() ,sort.end());
    // int left = 0 , right = nums.size()-1;
    // while(left <= right){
    //     if(nums[left]+nums[right] == target) return true;
    //     else if (nums[left]+nums[right] > target) right--;
    //     else left++;
    // }
    // return false;    



    // int left = 0 ;
    // int right = 1;
    // while(left < nums.size() && right < nums.size()){
    //     if ( ( nums[left] + nums[right] )  == target ){
    //         return {left,right};
    //     }
    //     left++;
    //     right++;
    // }

    //this approach leads to failure when adjacent numbers do not give target     2/10