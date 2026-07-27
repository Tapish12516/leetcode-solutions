class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mapp;
        vector<int> answer;
        for(int i = 0 ; i < n ; i++){
            mapp[nums[i]]++;
        }
        for(auto mapelement : mapp){
            int element = mapelement.first;
            int count = mapelement.second;

            if(count > (n/3) ) answer.push_back(element);
        }
        return answer;
    }
};