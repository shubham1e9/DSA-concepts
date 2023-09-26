class Solution {
public:
    string removeDuplicateLetters(string s) {
        set<char> st;
        unordered_map<char, int> mp;
        string ans = "";

        for (char i : s) {
            mp[i]++;
        }

        for (char i : s) {
            if (st.count(i) == 0) {
                while (!ans.empty() && ans.back() > i && mp[ans.back()] > 0) {
                    st.erase(ans.back());
                    ans.pop_back();
                }
                st.insert(i);
                ans += i;
            }
            mp[i]--;
        }

        return ans;
    }
};
