class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices.size());
        int n = prices.size();
        stack<int> st;

        st.push(prices[n - 1]);
        ans[n-1] = (prices[n - 1]);

        for(int i=n-2; i>=0; i--) {
            if(st.top() <= prices[i]) {
                ans[i] = (prices[i] - st.top());
                st.push(prices[i]);
            }
            else {
                while(!st.empty() && st.top() > prices[i])
                    st.pop();
                if(st.empty()) 
                    ans[i]=(prices[i]);
                else 
                    ans[i]=(prices[i]-st.top());
                st.push(prices[i]);
            }
        }
        return ans;
    }
};