class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long size = 0;
        int n = s.size();

        // Calculate the size of the decoded string
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                int repeat = s[i] - '0';
                size *= repeat;
            } else {
                size++;
            }
        }

        // Work backward to find the kth character
        for (int i = n - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                int repeat = s[i] - '0';
                size /= repeat;
                k %= size;
            } else {
                if (k == 0 || k == size) {
                    return string(1, s[i]);
                }
                size--;
            }
        }
    return " ";
    }
};