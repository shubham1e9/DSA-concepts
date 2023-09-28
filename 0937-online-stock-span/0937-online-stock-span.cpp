class StockSpanner {
public:
    vector<int> prices;

    StockSpanner() {}
    
    int next(int price) {
        prices.push_back(price);
        int span = 1;
        int n = prices.size();

        for(int i=n-2; i>=0; i--) {
            if(prices[i] <= price) {
                span++;
            }
            else {
                break;
            }
        }
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */