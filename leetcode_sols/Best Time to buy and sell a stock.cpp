class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int  min_price;   
    min_price=INT_MAX;
   int maxpro=0;
    for(int i=0;i<prices.size();i++)
     {
        min_price= min(min_price,prices[i]);
        maxpro=max(maxpro , prices[i]-min_price);
     } return maxpro;
    }
};
