/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 0, high = n-2;

        while(low != high) {
            int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                low = mid + 1;
            } 
            else {
                high = mid;
            }
        }
        int peakIndex = low;
        low = 0, high = peakIndex;

        while(low != high) {
            int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) < target) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }

        if(mountainArr.get(low) == target) {
            return low;
        }

        low = peakIndex + 1;
        high = n-1;

        while(low != high) {
            int mid = (low + high) / 2;
            if(mountainArr.get(mid) > target) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        if(mountainArr.get(low) == target) {
            return low;
        }
        return -1;
    }
};