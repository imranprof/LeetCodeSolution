#include<bits/stdc++.h>

using namespace std;

//hijibiji implement of mine
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, cur, nq, len;

        len = nums.size();
        if(len ==0)return 0;
        cur = 0;
        nq = nums[0];
        nums.erase(nums.begin());
        nums.push_back(nq);

        for(i = 1; i < len; i++){
            if(nums[cur]==nq){
                nums.erase(nums.begin());
            }
            else{
                nq = nums[cur];
                nums.erase(nums.begin());
                nums.push_back(nq);
            }
        }
        int ret = nums.size();
        return ret;
    }
};


//using two pointer method

int removeDuplicates(int* nums, int numsSize){


    int i, j, len;
    len = numsSize;
    if(len ==0)return 0;

    i = 0;


    for(j = 1; j < len; j++){

        if(nums[i] != nums[j]){
            i++;
            nums[i]=nums[j];

        }
    }
    return i+1;
}

int main()
{


    return 0;
}
