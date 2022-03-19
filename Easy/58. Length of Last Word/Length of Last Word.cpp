class Solution {
public:
    int lengthOfLastWord(string s) {
        int last, ans, cnt, space, i, len;

        len = s.length();

        for(i = len-1; ;i--){
            if(isalpha(s[i])){
                last = i;
                break;
            }
        }

        space = -1;

        for(i = 0; i < last; i++){
            if(s[i]==' ')space = i;
        }

        if(space!=-1){
            ans = last - space;
        }
        else{
            ans = last+1;
        }

        return ans;
    }
};
