class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1) return 0;
        
        int mnv = prices[0];
        
        int ans = 0;
        
        for(int i = 1 ; i < n ; i++)
        {
            ans = max(ans, prices[i] - mnv);
            mnv = min(mnv, prices[i]);
        }
        return ans;
        
    }
};
