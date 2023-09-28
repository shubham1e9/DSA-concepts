class StockSpanner {
    stack<int> st; 
    vector<int> prices;

public:
    StockSpanner() {}
    
    int next(int price) {
        int span = 0;
        prices.push_back(price);

        while(!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }
        if(st.empty())
            span = prices.size();
        else
            span = prices.size()-1-st.top();
        st.push(prices.size()-1);            

        return span;
    }
};