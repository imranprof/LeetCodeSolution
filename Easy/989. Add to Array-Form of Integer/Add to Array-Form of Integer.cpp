class Solution {
public:

    int countDigit(int n) {
        return floor(log10(n) + 1);
    }

    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;

        reverse(num.begin(),num.end());

        int carry = 0, d, sum;


        for(int i = 0; i < num.size(); i++){
            d = k%10;
            k = k/10;

            sum = d+carry+num[i];
            if(sum > 9){
                carry = 1;
                ans.push_back(sum%10);
            }
            else{
                carry = 0;
                ans.push_back(sum);
            }

        }

        while(k)
        {
            d = k%10;
            k = k/10;
            sum = d+carry;

            if(sum > 9){
                carry = 1;
                ans.push_back(sum%10);
            }
            else{
                carry = 0;
                ans.push_back(sum);
            }

        }

        if(carry)ans.push_back(carry);

        reverse(ans.begin(),ans.end());
        return ans;

    }
};
