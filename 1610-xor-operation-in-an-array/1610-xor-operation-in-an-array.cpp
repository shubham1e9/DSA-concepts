class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> v(n);
        int ans = 0;
        for(int i=0; i<n; i++) {
            v[i] = start + 2 * i;
        }
        for(int i=0; i<n; i++) {
            ans = ans ^ v[i];
        }
        return ans;
    }
};