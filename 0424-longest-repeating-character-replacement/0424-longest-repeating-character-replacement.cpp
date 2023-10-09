class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> charCount(26, 0); // Array to store character frequencies
        int maxFreq = 0; // Maximum character frequency
        int start = 0; // Start of the sliding window
        int result = 0; // Result variable to store the maximum window size

        for (int end = 0; end < s.length(); end++) {
            charCount[s[end] - 'A']++; // Update character frequency
            maxFreq = max(maxFreq, charCount[s[end] - 'A']);

            // If the window size minus the maximum frequency exceeds k,
            // shrink the window by moving the start pointer to the right
            if (end - start + 1 - maxFreq > k) {
                charCount[s[start] - 'A']--; // Update character frequency
                start++; // Move the start pointer
            }

            // Update the result with the maximum window size
            result = max(result, end - start + 1);
        }

        return result;
    }
};
