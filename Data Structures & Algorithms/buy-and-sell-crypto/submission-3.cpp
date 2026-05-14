class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=10e8 , maxi = -1;
        for(int i=0;i<prices.size();i++){
            mini= min(mini,prices[i]);
            maxi = max(maxi,(prices[i]-mini));
        }
        
        return maxi;
    }
};