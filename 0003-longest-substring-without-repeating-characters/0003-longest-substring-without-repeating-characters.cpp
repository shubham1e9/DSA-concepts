class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.size();
        // vector<int> v(256, -1);
        // int right = 0, left = 0, longest = 0;
        
        // while(right < n) {
        //     if(v[s[right]] != -1) {
        //         left = max(left, v[s[right]] + 1);
        //     }
        //     v[s[right]] = right;
        //     longest = max(longest, right - left + 1);
        //     right++;
        // }
        // return longest;
        int longest = 0;

        for(int i=0; i<s.size(); i++) {
            unordered_set<char> charset;
            int curr = 0;
            for(int j=i; j<s.size(); j++) {
                if(charset.find(s[j]) == charset.end()) {
                    charset.insert(s[j]);
                    curr++;
                    longest = max(longest, curr);
                }
                else {
                    break;
                }
            }
        }
        return longest;
    }
};