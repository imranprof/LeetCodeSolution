class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,bool>smap,dupmap;

        for(i = 0; i < nums.size();i++){
            if(smap[nums[i]]==false){
                smap[nums[i]]=true;
            }
            else{
                dupmap[nums[i]]=true;
            }
        }
        int ans;
        for(i=0; i< nums.size();i++){
           if(dupmap[nums[i]]==false){
            ans = nums[i];
            break;
           }
        }
        return ans;
    }
};


//better solution using xor

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = nums[0];
        for(int i = 1; i < nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};

