// #pragma GCC optimize("O3")

class Solution {
public:
    int poorPigs(int buckets, int timeDetect, int timeTest) {
        return ceil(log2(buckets)/log2(int(timeTest/timeDetect)+1));

    }
};