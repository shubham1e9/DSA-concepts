class Solution {
public:

    int get(vector<int>& nums, int k) {
        int left = 0, count = 0;
        unordered_map<int, int> freqMap;

        for(int right = 0; right < nums.size(); right++) {
            if(freqMap[nums[right]] == 0) {
                k--;    
            }
            freqMap[nums[right]]++;

            while(k < 0) {
                freqMap[nums[left]]--;
                if(freqMap[nums[left]] == 0) {
                    k++;
                }
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return get(nums, k) - get(nums, k-1);
    }
};