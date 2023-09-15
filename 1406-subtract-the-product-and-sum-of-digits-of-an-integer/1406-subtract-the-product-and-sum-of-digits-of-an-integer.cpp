class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro = 1, sum = 0;
        while(n != 0) {
            int digits = n % 10;
            pro = pro * digits;
            sum += digits;
            n = n / 10;
        }  
        return (pro - sum);
    }
};