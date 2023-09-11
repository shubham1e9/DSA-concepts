class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> something;
        something.push_back({1});
        for (int i = 1; i<numRows;i++){
            vector<int> a;
            a.push_back(1);
            for(int j = 1; j<=i-1;j++){
                a.push_back(something[i-1][j-1]+something[i-1][j]);
            }
            a.push_back(1);
            something.push_back(a);
        }
        return something;
    }
};