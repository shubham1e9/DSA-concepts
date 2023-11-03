class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0;

        for (int i : target) {
            while(j < i - 1) {
                ans.push_back("Push");
                ans.push_back("Pop");
                j++;
            }
            ans.push_back("Push");
            j++;
        }
        return ans;
    }
};