class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num>0){
            if(num%2 == 0) num = num/2;
            else { num  = num -1;}
            steps++;
        }
        return steps;
    }
};


// class Solution {
// public:
//     int numberOfSteps(int num) {
//         int steps = 0;

//         while(num) {
//             if(num & 1) num--;
//             else num >>= 1;                                  //bitwise can also be used for this problem 

//             steps++;
//         }

//         return steps;
//     }
// };