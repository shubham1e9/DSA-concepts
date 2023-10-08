class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, longest = 0, n = nums.size();

        while(right < n) {
            if(nums[right] == 0) {
                k--;
            }

            while(k < 0) {
                if(nums[left] == 0) {
                    k++;
                }
                left++;
            }

            longest = max(longest, right - left + 1);
            right++;
        }

        return longest;
    }
};
