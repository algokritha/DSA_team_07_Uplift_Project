/* Problem Link => https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ */

/* Brute force causing time limit to exceed */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int profit = 0;
        int maxi = 0;
        for(int i=0; i<prices.size(); i++){
            int initial = prices[i];
            for(int j=i; j<prices.size(); j++){
                maxi = max(prices[j], maxi);
            }
            
            if(maxi > initial){
                if(maxi - initial > max_profit){
                    max_profit = maxi-initial;
                }
            }else{
                maxi = 0;
            }
        }
        
        return max_profit;
    }
};
