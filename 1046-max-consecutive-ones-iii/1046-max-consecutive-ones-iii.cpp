class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, n = nums.size(), longest = 0;
        
        while(right < n) {

            if(nums[right] == 1) {
                right++;
            }
            else if(k > 0) {
                k--;
                right++;
            }
            else {
                if(nums[left] == 0) {
                    k++;
                }
                left++;
            }
            longest = max(longest, right - left);
        }
        return longest;
    }
};