class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        vector<int> ans;

        for(int x : nums2) {
            if(s.count(x)) {
                ans.push_back(x);                                           //optimal approach O(n+m) and O(n)
                s.erase(x);
            }
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans;
//         for(int i  = 0 ; i < nums1.size() ; i++){
//             bool found = false;

//             for(int j = 0 ; j < nums2.size() ; j++){
//                 if(nums2[j] == nums1[i]) {found = true; break;}
//             }                                                                    //bruteforce O(n*m + n*k) and O(k)

//             if(found)  { bool already = false; 

//             for(int k = 0 ; k < ans.size() ; k++){
//                 if(ans[k] == nums1[i]) { already = true; break; }
//             }

//             if(!already) ans.push_back(nums1[i]); 
             
//             }
//         }
//         return ans;
//     }
// };