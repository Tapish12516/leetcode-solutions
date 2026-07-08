class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        int n = s.size();

        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % MOD;
        }

        vector<long long> prefixNumber(n + 1, 0);
        vector<int> prefixSum(n + 1, 0);
        vector<int> nonZeroCount(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + (s[i] - '0');
            nonZeroCount[i + 1] = nonZeroCount[i];

            prefixNumber[i + 1] = prefixNumber[i];

            if (s[i] != '0') {
                int digit = s[i] - '0';
                nonZeroCount[i + 1]++;
                prefixNumber[i + 1] =
                    (prefixNumber[i] * 10 + digit) % MOD;
            }
        }
                                                //most optimal solution , saved for later
        vector<int> answer;

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

            int sum = prefixSum[r + 1] - prefixSum[l];

            int cnt = nonZeroCount[r + 1] - nonZeroCount[l];

            long long x =
                (prefixNumber[r + 1]
                - prefixNumber[l] * pow10[cnt] % MOD
                + MOD) % MOD;

            answer.push_back((x * sum) % MOD);
        }

        return answer;
    }
};



// class Solution {
// public:
//     vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
//         vector<int> answer;
//         for(auto it:queries){
//            int number_of_char = it[1] - it[0]+1;
//            string s1 = s.substr(it[0], number_of_char);
//            int temp_x = stoi(s1);
//            int x = 0; int sum = 0 ;
//            int place = 1;
//             while( temp_x > 0 ){
//                 int dig = temp_x%10;
//                 if(dig != 0) { x = x + dig*place;
//                 place = place*10; }
//                 temp_x = temp_x/10;                                                  //wrong approach
//             }
//             int temp = x;
//             while(temp>0){
//                 sum = sum + temp%10;
//                 temp = temp/10;
//             }
//             answer.push_back(x*sum);
//         }
//         return answer;
//     }
// };




// class Solution {
// public:
//     vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

//         const int MOD = 1e9 + 7;
//         vector<int> answer;

//         for (auto &q : queries) {

//             long long x = 0;
//             long long sum = 0;

//             for (int i = q[0]; i <= q[1]; i++) {

//                 int digit = s[i] - '0';

//                 if (digit != 0) {                                    //brute force but did not pass the largest case
//                     x = (x * 10 + digit) % MOD;
//                     sum += digit;
//                 }
//             }

//             answer.push_back((x * sum) % MOD);
//         }

//         return answer;
//     }
// };