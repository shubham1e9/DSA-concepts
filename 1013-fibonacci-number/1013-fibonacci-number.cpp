class Solution {
public:
    // int solve(int n, vector<int>&dp){
    //     // base case
    //     if(n == 0 ||n==1){
    //         return n;
    //     }
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     dp[n] = solve(n-1,dp) + solve(n-2,dp);
    //     return dp[n];
    // }
    int fib(int n) {
        if(n == 0) return 0;
        vector<int> dp(100, -1);
        dp[2] = 1;
        dp[1] = 1;
        for(int i=3; i<=n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};