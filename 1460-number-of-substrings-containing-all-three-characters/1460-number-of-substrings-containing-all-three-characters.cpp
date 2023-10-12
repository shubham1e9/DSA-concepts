class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int ai = -1, bi = -1, ci = -1;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'a') {
                ai = i;
            }
            if(s[i] == 'b') {
                bi = i;
            }
            if(s[i] == 'c') {
                ci = i;
            }
            if(i > 1) {
                count += min({ai, bi, ci}) + 1;
            }
        }
        return count;
    }
};