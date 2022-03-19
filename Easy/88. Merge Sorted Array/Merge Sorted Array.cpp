class Solution
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {

        vector<int>V;
        int i, j;
        i = j = 0;
        while(i < m && j < n)
        {

            if(nums1[i]<nums2[j])
            {
                V.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]>nums2[j])
            {
                V.push_back(nums2[j]);
                j++;
            }
            else
            {
                V.push_back(nums1[i]);
                V.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while(i < m){
            V.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            V.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        nums1 = V;



    }
};
