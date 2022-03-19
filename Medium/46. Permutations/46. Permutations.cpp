//solution by swap two elements recursion technique
class Solution {
public:

    vector<vector<int>>ans;

    void permutation(vector<int>&nums, int idx){
        if(idx ==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size();i++){
            swap(nums[i],nums[idx]);

            permutation(nums,idx+1);
            swap(nums[i],nums[idx]);

        }
   }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<int>v;

        permutation(nums,0);
        return ans;
    }
};




//solution by pick and remove recursion technique
class Solution {
public:

    vector<vector<int>>ans;

    void permutation(vector<int>&nums,vector<int>&v,map<int,bool>&mp){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
        for(int i = 0; i < nums.size();i++){
            if(!mp[i]){
                v.push_back(nums[i]);
                mp[i]=true;
                permutation(nums,v,mp);
                mp[i]=false;
                v.pop_back();
            }
        }
   }

    vector<vector<int>> permute(vector<int>& nums) {
        map<int,bool>m;
        vector<int>v;

        permutation(nums,v,m);
        return ans;
    }
};
