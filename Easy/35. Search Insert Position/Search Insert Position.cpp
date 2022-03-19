class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ind, i, flag = 0;
        int len = nums.size();
        for(i = 0; i < nums.size(); i++){
            if(target == nums[i]) return i;
        }

        if(target < nums[0]){
            flag = 1;
            ind = 0;
        }

        else if(target > nums[len-1]){
            ind = len;
            flag = 1;
        }


        if(flag)return ind;

        for(i = 0;i < len-1; i++){
            if(target > nums[i] && target < nums[i+1]){
                ind = i+1;
                break;
            }
        }
        return ind;

    }
};
