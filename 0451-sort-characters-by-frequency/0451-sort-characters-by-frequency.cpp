class Solution {
public:
    string frequencySort(string s) {
    string ans = "";
	map<char, int> mp;
	priority_queue<pair<int, char>> pq;

    for(auto i : s) {
		mp[i]++;
	}
    for(auto i : mp) {
		pq.push({i.second, i.first});
	}
	while(pq.size() > 0) {
            for(int i=0; i<pq.top().first; i++) {
                ans += pq.top().second;
            }
            pq.pop();
        }
    return ans;
    }
};