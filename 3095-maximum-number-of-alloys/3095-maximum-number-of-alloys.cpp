class Solution {
public:
    bool func(long long mid, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        long long minCost = INT_MAX;
        for (int i = 0; i < composition.size(); ++i) {
            long long currCost = 0;
            for (int j = 0; j < composition[i].size(); ++j) {
                long long curr = mid * composition[i][j];
                if (stock[j] >= curr)
                    continue;
                else {
                    long long extra = (curr - stock[j]) * cost[j];
                    currCost += extra;
                }
            }
            minCost = min(currCost, minCost);
        }
        return (minCost <= budget);
    }

    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        long long low = 0, high = 1e9, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (func(mid, budget, composition, stock, cost)) {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};