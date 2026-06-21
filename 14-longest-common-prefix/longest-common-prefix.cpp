class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++) {

            while(strs[i].find(prefix) != 0) {
                prefix.pop_back();

                if(prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};







// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if ( strs[0].empty() ) return "";
//         if ( strs[1].empty() ) return "";
//         string s;
//         int i = 0 ; int j = 0 ;
//         while( i==j && i<strs[0].length() && j < strs[1].length()  ){
//             if( strs[0][i] == strs[1][j] ) {s.push_back(strs[1][i]) ;
//             i++;j++;
//             }
//             else break;
//         }                                                                                        //failed at three places
//         if (s.empty()) return "";
//         bool istrue = true;
//         for(int i = 2 ; i<strs.size() ; i++){
//             if (strs[i].empty()) return "";
//             for(int j = 0 ; j < s.size() ; j++){
//                 if ( strs[i][j] == s[j] ) continue;
//                 else { istrue = false; break;}
//             }
//             if(istrue == false) break;  
//         }
//         if(istrue) return s;
//         return "";
//     }
// };