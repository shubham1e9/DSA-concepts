class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size() < 3) {
            return false;
        }

        stack<int> st;
        int third = INT_MIN;

        for(int i=nums.size()-1; i>=0; i--) {
            int curr = nums[i];

            if(curr < third) {
                return true;
            }

            while(!st.empty() && st.top() < curr) {
                third = st.top();
                st.pop();
            }
            st.push(curr);
        }
        return false;
    }
};