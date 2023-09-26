class Solution {
public:
    string smallestSubsequence(string s) {
        set<char> sat;
        string ans = "";
        unordered_map<char, int> mp;

        for(char i : s) {
            mp[i]++;
        }

        for(char i : s) {
            if(sat.count(i) == 0) {
                while(!ans.empty() && ans.back() > i && mp[ans.back()] > 0) {
                    sat.erase(ans.back());
                    ans.pop_back();
                }
                sat.insert(i);
                ans += i;
            }
            mp[i]--;
        }

        return ans;
    }
};