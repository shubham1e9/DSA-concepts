class Solution {
public:
    int countbits(int i) {
        int count = 0;
        while(i > 0) {
            i = i & (i - 1);
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++) {
            ans.push_back(countbits(i));
        }
        return ans;
    }
};