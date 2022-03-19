class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>V;

        int carry = 0;

        reverse(digits.begin(),digits.end());
        int temp = 0, sum;
        for(int i = 0; i < digits.size(); i++){
            if(i==0){
                sum = digits[i]+1;

            }
            else{
                sum = digits[i]+carry;
            }
            if(sum > 9){
                carry = 1;
                V.push_back(0);

            }
            else{
                carry = 0;
                V.push_back(sum);
            }

        }
        if(carry)V.push_back(1);

        reverse(V.begin(),V.end());

        return V;

    }
};
