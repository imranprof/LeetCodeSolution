class Solution {
public:
    int dp[40];
    bool flag = true;
    int fib(int n) {
        if(flag){
            for(int i = 0; i < 40; i++)dp[i]=-1;
            flag = false;
        }
        if(n <=1)return n;
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            dp[n]=fib(n-1)+fib(n-2);
        }
        return dp[n];



    }
};


