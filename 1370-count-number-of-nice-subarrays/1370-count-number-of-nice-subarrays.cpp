class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        // vector<int> num;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] % 2 == 0) {
                nums[i] = 0;
            }
            else {
                nums[i] = 1;
            }
        }

        int count = 0, preSum = 0;
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++) {
            preSum += nums[i];

            if(preSum == k) {
                count++;
            }

            if(mp.find(preSum - k) != mp.end()) {
                count += mp[preSum - k];
            }
            mp[preSum]++;
        }
        return count;
    }
};