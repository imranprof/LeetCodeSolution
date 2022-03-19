class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int ans = 0;
        int mn = prices[0];

        for(int i = 1; i < prices.size();i++){
            int cur = prices[i];
            if(cur > mn){
                ans = max(ans,cur-mn);
            }
            else{
                mn = cur;
            }

        }
        return ans;
    }
};
