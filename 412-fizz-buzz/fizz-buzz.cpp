
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector <string> ans;
        int i=1;
        while(i<=n)
        {
            if((i%3==0)&&(i%5==0)){
                ans.push_back("FizzBuzz");

            }
            else if(i%3==0){
                ans.push_back("Fizz");
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }
            else{
             ans.push_back(to_string(i));            }
            i++;
        }
 return ans;   }
};

// class Solution {
// public:
//     vector<string> fizzBuzz(int n) {
//         vector<string> answer;
//         for(int i = 1 ; i <= n ; i++){
//             if( (i%15 == 0 ) answer.push_back("FizzBuzz");
//             else if (i%3 == 0) answer.push_back("Fizz");
//             else if (i%5 == 0) answer.push_back("Buzz");
//             else answer.push_back(to_string(i));
//         }
//         return answer;
//     }
// };