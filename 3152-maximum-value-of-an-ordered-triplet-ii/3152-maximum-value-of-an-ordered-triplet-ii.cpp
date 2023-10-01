class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;
        
        vector<int> prefix = nums, suffix = nums;
        
        for(int i=1; i<n; i++) {
            prefix[i] = max(prefix[i],prefix[i-1]);
        }

        for(int i=n-2; i>=0; i--) {
            suffix[i] = max(suffix[i], suffix[i+1]);
        }

        long long ans = 0;
        for(int i=1; i<n-1; i++) {
            long long vali = prefix[i-1];
            long long valj = nums[i];
            long long valk = suffix[i+1];
            long long val = (vali - valj) * valk;
            ans = max(ans, val);
        }
        return (ans < 0) ? 0 : ans;
    }
};