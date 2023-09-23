class Solution {
public:
    static bool sortBySize(string& a, string& b) {
        return a.size() < b.size();
    }
    
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> dp;
        sort(words.begin(), words.end(), sortBySize);
        int longestChain = 0;

        for(string word : words) {
            int longest = 0;

            for(int i=0; i<word.size(); i++) {
                string sub = word;
                sub.erase(i, 1);
                longest = max(longest, dp[sub]+1);
            }
            
            dp[word] = longest;
            longestChain = max(longestChain, longest);
        }

        return longestChain;
    }
};