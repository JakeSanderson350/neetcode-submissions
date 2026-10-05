class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyInd = 0;
        int sellInd = 1;
        int maxProfit = 0;

        
        while (sellInd < prices.size())
        {
            if (prices[buyInd] < prices[sellInd])
            {
                maxProfit = max(maxProfit, prices[sellInd] - prices[buyInd]);
            }
            else
            {
                buyInd = sellInd;
            }

            sellInd++;
        }
        

        return maxProfit;

    }
};
