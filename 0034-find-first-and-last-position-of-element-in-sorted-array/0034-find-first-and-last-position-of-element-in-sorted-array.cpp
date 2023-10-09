class Solution {
    int firstOcc(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) {
                ans = mid;
                high = mid - 1;
            }
            else if(target > nums[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int secondOcc(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) {
                ans = mid;
                low = mid + 1;
            }
            else if(target > nums[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOcc(nums, target));
        ans.push_back(secondOcc(nums, target));
        return ans;
    }
};