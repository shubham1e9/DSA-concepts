class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> weakestRows;
        vector<pair<int, int>> soldiers;

        for(int row=0; row<mat.size(); row++) {
            int count1 = onesCount(mat[row]);
            soldiers.push_back({count1, row});
        }
        sort(soldiers.begin(), soldiers.end());

        for(int i=0; i<k; i++) {
            weakestRows.push_back(soldiers[i].second);
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