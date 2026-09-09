class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        long long start = 1000;
        while (start <= n) {                    //O(logn) but valid for largest n also.
            total += n - start + 1;
            start *= 1000;
        }
        return total;
    }
};

// class Solution {
// public:
//     long long countCommas(long long n) {
//         long long total = 0;
//         if (n >= 1000)
//             total += n - 999;
//         if (n >= 1000000)
//             total += n - 999999;
//         if (n >= 1000000000)                        //O(1) solution for the given constraints
//             total += n - 999999999; //If constraints change to allow larger numbers, you'd have to add more if statements.
//         if (n >= 1000000000000LL)
//             total += n - 999999999999LL;
//         return total;
//     }
// };

        // long long x = n;
        // long long comma = 0;
        // int count = 0;
        // while (x > 0) {
        //     count++;
        //     x /= 10;
        //     if (count == 3 && x > 0) {               //no use of commas in n
        //         comma++;
        //         count = 0;
        //     }
        // }