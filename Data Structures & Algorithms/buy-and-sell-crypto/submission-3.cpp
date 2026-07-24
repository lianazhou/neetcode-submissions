class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size == 0) return 0;
        vector<int> pre(size, 0);
        vector<int> suf(size, 0);
        int low = prices[0];
        int high = 0;
        for(int i = 0; i < size; i++){
            low = min(prices[i], low);
            pre[i] = low;
        }
        for(int i = size - 1; i >= 0; i--){
            high = max(prices[i], high);
            suf[i] = high;
        }
        int most = 0;
        for(int i = 0; i < size; i++){
            most = max(suf[i] - pre[i], most);
        }
        return most;
    }
};
