class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        if(n < 3) return 0;
        
        // if(n == 3) {
        //     long long t = (long long)(nums[0] - nums[1]) * nums[2];
        //     return t > 0 ? t : 0;
        // }  
         
        vector<long long> arr2(n);
        arr2[n-1] = nums[n-1];
        
        for(int i=n-2; i>=0; i--) {
            arr2[i] = max(arr2[i+1],(long long)nums[i]);
        }
        
        vector<long long> arr(n);
        arr[0] = nums[0];
        
        for(int i=1; i<n; i++) {
            arr[i] = max(arr[i-1],(long long)nums[i]);
        }
    
        for(int i=1; i<n-1; i++) {
            long long temp = (arr[i-1] - (long long)nums[i]) * (long long)arr2[i+1];
            ans = max(ans, temp);
        }
        return (ans < 0) ? 0 : ans;
    }
};