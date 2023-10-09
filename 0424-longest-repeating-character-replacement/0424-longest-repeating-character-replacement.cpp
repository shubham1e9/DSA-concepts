class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> charCount(26, 0); 
        int maxFreq = 0, left = 0, ans = 0; 

        for(int right = 0; right < s.length(); right++) {
            charCount[s[right] - 'A']++;

            maxFreq = max(maxFreq, charCount[s[right] - 'A']);

            if(right - left + 1 - maxFreq > k) {
                charCount[s[left] - 'A']--; 
                left++;
            }
            
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};