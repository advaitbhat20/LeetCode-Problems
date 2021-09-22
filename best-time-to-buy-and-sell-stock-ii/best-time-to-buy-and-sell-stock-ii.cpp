class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0;
        
        int buy = prices[0];
        int sell = prices[0];
        int maxProfit = 0;
        int i = 0;
        
        while(i<prices.size()-1)
        {
            while(i<prices.size()-1 and prices[i]>prices[i+1])
                i++;
            buy = prices[i];
            while(i<prices.size()-1 and prices[i]<=prices[i+1])
                i++;
            sell=prices[i];
            
            maxProfit += sell-buy;
        }
        
        return maxProfit;
    }
};