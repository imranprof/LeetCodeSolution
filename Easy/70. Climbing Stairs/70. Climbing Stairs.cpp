
/////Top down dp solution
class Solution {
public:
    int dp[47];
    int climbStairs(int n) {

        for(int i = 0;i <= n; i++){
            dp[i]=-1;
        }
        dp[1]=1;
        dp[2]=2;
        return Way(n);
    }
    int Way(int n){
        if(n < 0)return 0;
        if(dp[n]!=-1)return dp[n];

        dp[n]=Way(n-1)+Way(n-2);
        return dp[n];
    }

};

//bottom up solution

class Solution {
public:

    int climbStairs(int n) {
        int dp[47];
        for(int i = 0;i <= n; i++){
            dp[i]=-1;
        }
        dp[1]=1;
        dp[2]=2;

        for(int i = 3; i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }


};
