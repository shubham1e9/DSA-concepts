class Solution {
public:
    int nCr(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}
    vector<int> getRow(int rowIndex) {
        vector<int> tempLst;
        int i=rowIndex;
        while(i>=0)
        {
        tempLst.push_back(nCr(rowIndex, rowIndex-i));
        i--;
        }
    return tempLst;
    }
};