//solution by swap two elements recursion technique
class Solution {
public:

    vector<vector<int>>ans;

    void allSubsets(vector<int>&nums, int idx, vector<int>&v){
        if(idx ==nums.size()){

            return;
        }
        for(int i = idx; i < nums.size();i++){
            //swap(nums[i],nums[idx]);
            v.push_back(nums[i]);
            ans.push_back(nums);
            allSubsets(nums,idx+1,v);
            //swap(nums[i],nums[idx]);

        }
   }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int>v;

        allSubsets(nums,0,v);
        return ans;
    }
};
