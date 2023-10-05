class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> v;
        for(int i=0; i<n; i++) {
            v[nums[i]]++;
        }
        for(auto it : v) {
            if(it.second > (n/3)) 
                ans.push_back(it.first);
        }
        return ans;
    }
};