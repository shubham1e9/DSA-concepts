class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        // int n = routes.size();
        if(source == target) return 0;
        // if(!n)
        //     return -1;
        unordered_map<int, vector<int>> stops;
        for(int i = 0; i<routes.size(); i++) {
            for(const auto&cur : routes[i]) {
                stops[cur].push_back(i);
            }
        }
        queue<int> to_visit;
        to_visit.push(source);
        unordered_set<int>stop_visited, bus_visited;
        stop_visited.insert(source);
        int lvl = 0;
        while(!to_visit.empty()){
            auto s = to_visit.size();
            while(s--){
                auto cur = to_visit.front();
                to_visit.pop();
                if(cur == target)
                    return lvl;
                for(const auto&next_bus:stops[cur]){
                    if(bus_visited.insert(next_bus).second){
                        for(const auto&next_stop:routes[next_bus]){
                            if(stop_visited.insert(next_stop).second)
                                to_visit.push(next_stop);
                        }
                    }
                }
            }
            lvl++;
        }
        return -1;
    }
};