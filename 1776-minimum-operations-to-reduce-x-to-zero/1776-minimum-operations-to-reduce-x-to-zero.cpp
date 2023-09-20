class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0, n = nums.size();

        for(int i=0 ; i<n; i++) {
            totalSum += nums[i];
        }

        totalSum -= x;
        if(totalSum == 0)  return n; 

        int left = 0, right = 0 ,sum = 0 , maxWinSize = 0;

        while(right < n) {
            sum += nums[right];

            while(left < n && sum >= totalSum) {
                if(sum == totalSum)  
                    maxWinSize = max(maxWinSize, right - left + 1);
                sum -= nums[left++];
                // right++;
            }   
            right++;
        }
        if(maxWinSize == 0)  return -1;
        return  (n - maxWinSize);
    }
};