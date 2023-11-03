class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int idx = 0;
        vector<string> ans;
        for (int i = 1; i <= n && idx < target.size(); ++i) {
            if (i < target[idx]) {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else {
                ans.push_back("Push");
                idx++;
            }
        }
        return ans;
    }
};