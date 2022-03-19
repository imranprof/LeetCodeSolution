#include<bits/stdc++.h>

using namespace std;


class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i, j, len;
        len = nums.size();
        vector<int>sol;

        map<int,int>mp;

        int in1,num2;

        for(i = 0; i < nums.size(); i++){
            mp[nums[i]]=i;
        }

        for(i = 0; i < nums.size(); i++){
            if(mp[target-nums[i]]!=0 && mp[target-nums[i]]!=i){
                sol.push_back(i);
                num2 = target-nums[i];
                sol.push_back(mp[target-nums[i]]);

                break;
            }
        }


        return sol;


    }
};


int main()
{
    Solution a;

    vector<int>num, ans;
    int n;
    for(int i = 0; i < 3;i++){
        scanf("%d",&n);
        num.push_back(n);
    }

    ans = a.twoSum(num,6);

    for(int i = 0; i < ans.size(); i++){
        printf("%d ", ans[i]);
    }

    return 0;
}
