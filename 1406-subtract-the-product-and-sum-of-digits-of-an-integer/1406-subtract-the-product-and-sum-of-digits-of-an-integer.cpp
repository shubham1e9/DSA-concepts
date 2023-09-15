class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1;
        vector<int> v;
        while(n > 0) {
            v.push_back(n%10);
            n = n / 10;
        }
        for(int i=0; i<v.size(); i++) {
            sum = sum + v[i];
            pro = pro * v[i];
        }
        return pro - sum;
    }
};