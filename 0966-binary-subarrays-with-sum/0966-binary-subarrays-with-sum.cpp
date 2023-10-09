class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0, preSum = 0;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++) {
            preSum += nums[i];

            if(preSum == goal) {
                count++;
            }

            if(mp.find(preSum - goal) != mp.end()) {
                count += mp[preSum - goal];
            }
            mp[preSum]++;
        }
        return count;
    }
};