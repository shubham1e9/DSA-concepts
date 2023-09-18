class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> weakestRows;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

        for(int row=0; row<mat.size(); row++) {
            int count1 = onesCount(mat[row]);
            minHeap.push({count1, row});
        }
        while(k--) {
            weakestRows.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return weakestRows;
    }

    int onesCount(vector<int>& row) {
        int low = 0, high = row.size()-1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(row[mid] == 1) 
                low = mid + 1;
            else
                high = mid - 1;
        }
        return low;
    }
};