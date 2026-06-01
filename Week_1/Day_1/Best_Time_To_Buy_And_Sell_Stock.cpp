// LeetCode: Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2018635723/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if((prices[i]-m)>profit)
                profit=prices[i]-m;
            if(prices[i]<m)
                m=prices[i];
        }
        return profit;
    }
};
