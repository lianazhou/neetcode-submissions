class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif = 0;
        for(int first = 0; first < prices.size() - 1; first++)
        {
            for(int second = first + 1; second < prices.size(); second++)
            {
                int cur = prices[second] - prices[first];
                if(cur > dif)
                {
                    dif = cur;
                }
            }
        }
        return dif;
    }
};
