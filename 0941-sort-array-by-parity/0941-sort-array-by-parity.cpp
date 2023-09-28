class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd, even, ans;

        for(int i : nums) {
            if(i % 2 == 0) {
                even.push_back(i);
            }
            else {
                odd.push_back(i);
            }
        }
        for(int i : even) {
            ans.push_back(i);
        }
        for(int i : odd) {
            ans.push_back(i);
        }
        return ans;
    }
};