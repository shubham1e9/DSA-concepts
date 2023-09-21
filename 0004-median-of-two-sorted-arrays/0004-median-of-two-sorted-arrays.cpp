class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size(), i = 0, j = 0;
        vector<int> v3;

        while(i < n && j < m) {
            if(nums1[i] < nums2[j])
                v3.push_back(nums1[i++]);
            else 
                v3.push_back(nums2[j++]);
        }
        while(i < n) 
            v3.push_back(nums1[i++]);
        while(j < m) 
            v3.push_back(nums2[j++]);

        int size = n + m;
        if(size % 2 == 1)
            return v3[size/2];
        return (double) ((double)(v3[size/2]) + (double)(v3[size/2 - 1])) / 2.0;
    }
};