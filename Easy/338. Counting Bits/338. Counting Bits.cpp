class Solution
{
public:
    vector<int> countBits(int n)
    {

        vector<int>ans;
        ans.push_back(0);

        for(int i = 1; i <= n; i++)
        {
            int cnt = 0;
            int now = i;
            while(now)
            {
                if(now & 1)
                    cnt++;
                now = now>>1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};

// by iterative dp

class Solution
{
public:
    vector<int> countBits(int n)
    {
        int dp[100005];
        memset(dp, 0, sizeof(dp));

        for(int i = 1;i <= n;i++){
            dp[i]=dp[i>>1]+(i%2);
        }
        vector<int>ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(dp[i]);
        }

        //can be copy by this
        /*
        std::vector<int>ans(dp, dp + n+1);
        */
        return ans;

    }
};

