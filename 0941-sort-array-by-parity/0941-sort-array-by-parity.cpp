class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low = 0, mid = 0;  
        while(mid < nums.size()) {
            if(nums[mid] & 1 == 1) {
                mid++;
            }
            else {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
        }
        return nums;
    }
};