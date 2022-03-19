class Solution {
public:
    int dp[40];
    int tribonacci(int n) {
        for(int i = 0; i <= n;i++)dp[i]=-1;

        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        return trib(n);
    }

    int trib(int n){
        if(n < 0)return 0;

        if(dp[n]!=-1)return dp[n];

        dp[n] = trib(n-1)+trib(n-2)+trib(n-3);
        return dp[n];
    }
};
