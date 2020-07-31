class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur = 0;
        bool inhand = false;
        int profit = 0;
        for(int next = 1; next<prices.size(); next++){
            if(prices[next] > prices[cur]){
                profit += prices[next] - prices[cur];
                cur = next;
            }else{
                cur = next;
            }
        }
        return profit;
    }
};
