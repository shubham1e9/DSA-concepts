class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right, n = nums.size();
        
        for(right = 0; right < n; right++) {
            if(nums[right] == 0) {
                k--;
            }
            // A negative k denotes we have consumed all allowed 
            // flips and window has more than allowed zeros,
            //  thus increment left pointer by 1 to keep the window size same.

            if(k < 0) {
                // If the left element to be thrown out is zero we increase k.
                k += 1 - nums[left];
                left++;
            }
        }

        return right - left;
    }
};