class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans, i, j;
        int mp[300];

        memset(mp,-1,sizeof(mp));

        ans = 0;
        j = -1;
        for(i = 0 ; i < s.length(); i++){
            if(mp[s[i]]>-1){
                j = max(j,mp[s[i]]);
            }
            ans = max(ans, i-j);
            mp[s[i]]=i;
        }

        return ans;



    }
};
