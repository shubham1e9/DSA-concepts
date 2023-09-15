class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 0;
        ans = (n%2 == 0) ?  n :  n * 2;
        return ans;
    }
};