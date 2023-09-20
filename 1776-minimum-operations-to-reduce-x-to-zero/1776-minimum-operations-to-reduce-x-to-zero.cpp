class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0, n = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<n; i++) {
            sum += nums[i];
            mp[sum] = i;
        }
        if(sum < x) return -1;
        mp[0] = 0;

       int longest = 0, presum = 0;
       sum -= x;

        for(int i=0; i<n; i++) {
           presum += nums[i];
           if(mp.count(presum - sum)) {
                if(presum - sum == 0) 
                    longest = max(longest, i - mp[presum - sum] + 1);
                else 
                    longest = max(longest, i - mp[presum - sum]);
            }
        } 
        return longest == 0 ? (sum == 0 ? n : -1) : n - longest;
    }
};