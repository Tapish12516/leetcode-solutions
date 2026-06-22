class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char , int> mapp;                     //array can be used instead
        string s = "balloon";
        for( int i = 0 ; i < 7 ; i++){
            mapp[s[i]] = 0 ;
        }
        for(char ch : text) {
            mapp[ch]++;
        }
        int arr[5];
        arr[0] = mapp['b'];
        arr[1] = mapp['a'];
        arr[2] = mapp['l'] / 2;
        arr[3] = mapp['o'] / 2;
        arr[4] = mapp['n'];
        return *min_element(arr, arr + 5);
    }
};


// class Solution {
// public:
//     int maxNumberOfBalloons(string text) {
//         int freq[26] = {0};

//         for(char ch : text) {
//             freq[ch - 'a']++;
//         }
//                                                                              optimal solution
//         return min({
//             freq['b' - 'a'],
//             freq['a' - 'a'],
//             freq['l' - 'a'] / 2,
//             freq['o' - 'a'] / 2,
//             freq['n' - 'a']
//         });
//     }
// };

// for( int i = 0 ; i < 7 ; i++){
        //     for(int j = 0 ; j < text.length() ; j++){
        //         if ( text[j] == s[i] ) mapp[s[i]]++;             this whole thing is replaced by 3 lines
        //     }
        //     if ( mapp[s[i]] == 0 ) return 0;
        // }