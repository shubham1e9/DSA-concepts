class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = t.size(),j = 0, n = s.size();
        
        for(int i=0; i<m && j<n; i++) {
            if(s[j] == t[i]) {
                j++;
            }
        }
        return (j == n);
    }
};