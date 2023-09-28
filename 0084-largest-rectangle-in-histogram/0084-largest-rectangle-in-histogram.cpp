class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        vector<int> next(n), prev(n);

        next = nextSmaller(heights, n);
        prev = prevSmaller(heights, n);

        for(int i=0; i<n; i++) {
            if(next[i] == -1) {
                next[i] = n;
            }
            int length = heights[i];
            int breadth = next[i] - prev[i] -1;

            int newArea = length * breadth;
            ans = max(ans, newArea);
        }
        return ans;
    }

    private:
    vector<int> nextSmaller(vector<int> arr, int n) {
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);

        for(int i=n-1; i>=0; i--) {
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmaller(vector<int> arr, int n) {
        stack<int> st;
        vector<int> ans(n);
        st.push(-1);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr) {
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
};