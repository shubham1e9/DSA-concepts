class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int largest = 0, smallest = 0;
        long long ans = 0;

        for(int i=0; i<nums.size(); i++) {
            int maxval = nums[i], minval = nums[i];
            for(int j=i; j<nums.size(); j++) {
                maxval = max(maxval, nums[j]);
                minval = min(minval, nums[j]);
                ans = ans + maxval - minval;
            }
        }
        return ans;
    }
};