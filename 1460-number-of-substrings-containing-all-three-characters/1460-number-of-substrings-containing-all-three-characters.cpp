class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = 0, b = 0, c = 0, count = 0;
        int left = 0, n = s.size();

        for(int right = 0; right < n; ++right) {

            if(s[right] == 'a') a++;
            else if (s[right] == 'b') b++;
            else if (s[right] == 'c') c++;

            while(a > 0 && b > 0 && c > 0) {
                count += n - right;
                if(s[left] == 'a') a--;
                else if (s[left] == 'b') b--;
                else if (s[left] == 'c') c--;
                left++;
            }
        }

        return count;
    }
};