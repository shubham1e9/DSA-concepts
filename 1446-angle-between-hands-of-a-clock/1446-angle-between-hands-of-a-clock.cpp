class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute = (double)minutes*6;
        double hours = hour * (double)30 + ((double)minutes/(double)2);
        if(hours >= 360) {
            hours = hours - 360;
        }
        return min(abs(minute - hours), 360-abs(minute - hours));
    }
};