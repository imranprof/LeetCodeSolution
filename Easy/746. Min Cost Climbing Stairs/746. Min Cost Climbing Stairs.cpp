
/////Top down dp or recursive
class Solution {
public:
    int dp[1010];
    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
       for(int i = 0; i < 1010;i++)dp[i]=-1;
       dp[0]=cost[0];
       dp[1]=cost[1];

       return min(minCost(cost,n-1),minCost(cost,n-2));
    }

    int minCost(vector<int>& cost, int n){
        if(n < 0)return 0;

        if(dp[n]!=-1)return dp[n];

        dp[n]=cost[n]+min(minCost(cost,n-1),minCost(cost,n-2));


        return dp[n];
    }
};

//bottom up dp or iterative
class Solution {
public:
    int dp[1010];
    int minCostClimbingStairs(vector<int>& cost) {
       for(int i = 0; i < 1010;i++)dp[i]=-1;
        int n  = cost.size();
       dp[0]=cost[0];
       dp[1]=cost[1];
        for(int i = 2; i < cost.size();i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);

    }


};
