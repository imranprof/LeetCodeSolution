class Solution {
public:
    bool isPalindrome(int x) {
        long long X, y;
        X = x;
        bool flag = true;
        if(X < 0)flag = false;
        else{
            long long temp = X;
            y = 0;
            while(temp){
               int d = temp % 10;
               y =  (y*10)+d;
               temp = temp/10;
            }

            if(X != y)flag = false;
        }

        return flag;
    }
};

//Without integer overflow code
class Solution {
public:
    bool isPalindrome(int x) {
        int y;
        bool flag;
        if(x < 0 || (x%10==0 && x !=0)){
            return false;
        }
        else{

            y = 0;
            while(x){
                if(x <=y)break;
               int d = x % 10;
               y =  (y*10)+d;
               x = x/10;
            }

            return x ==y || (y/10)==x;
        }


    }
};
