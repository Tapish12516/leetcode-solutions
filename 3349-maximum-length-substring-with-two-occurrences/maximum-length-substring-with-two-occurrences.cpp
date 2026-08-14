class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int freq[26] = {0};

            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;

                bool valid = true;

                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 2) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};