class Solution {
public:
    uint32_t reverseBits(uint32_t n) {


        vector<int>V;

        while(n){
            if(n & 1){
                V.push_back(1);
            }
            else V.push_back(0);
            n = n >> 1;
        }
        int now = 32 - V.size();
        while(now--){
            V.push_back(0);
        }
        uint32_t pow = 1;
        uint32_t ans = 0;

        for(int i = V.size()-1; i>=0; i--){
            if(V[i]==1){
                ans += pow;
                pow*=2;
            }
            else{
                pow*=2;
            }
        }
        return ans;
    }
};
