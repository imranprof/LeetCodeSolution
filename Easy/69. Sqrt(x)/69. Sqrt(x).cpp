class Solution
{
public:
    int BinarySearch(int x)
    {
        int left, right, mid;

        left = 0;

        right = x;
        if(x==1)return 1;

        while(right>left+1)
        {
            mid = (left+right)/2;

            if(mid<=x/mid)
            {

                left = mid;
            }
            else
            {
                right = mid;
            }

        }


        return left;
    }

    int mySqrt(int x)
    {
        return BinarySearch(x);
    }
};
