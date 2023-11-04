class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = INT_MIN, minRight = INT_MAX;
        for (auto &l : left) 
            maxLeft = max(maxLeft, l);
        for(auto &r : right) 
            minRight = min(minRight, r);
        if(maxLeft == INT_MIN)
            return n - minRight;
        else if(minRight == INT_MAX)
            return maxLeft;
        else 
            return max(n - minRight, maxLeft);
    }
};