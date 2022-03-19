class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int tor, hare;


        tor = nums[0];
        hare = nums[tor];

        while(tor!=hare)
        {
            tor = nums[tor];
            hare = nums[nums[hare]];
        }

        tor = 0;

        while(tor!=hare)
        {
            tor = nums[tor];
            hare = nums[hare];

        }


        return tor;

    }
};
