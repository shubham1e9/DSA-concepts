class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0, n = cardPoints.size();

        for(int i=0; i<k; i++) {
            sum += cardPoints[i];
        }

        int curr = sum;

        for(int i=k-1; i>=0; i--) {
            curr = curr - cardPoints[i];
            curr = curr + cardPoints[n - k + i];
            sum = max(sum, curr);
        }
        return sum;
    }
};