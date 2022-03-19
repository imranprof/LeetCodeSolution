class Solution
{
public:
    string keypadArr[11] = {"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>A;

    void keypad(string s, string ans)
    {
        if(s.length()==0)
        {
            cout<<ans<<endl;
            A.push_back(ans);

            return;
        }

        char ch = s[0];

        string code = keypadArr[ch-'0'];

        string ros = s.substr(1);

        for(int i = 0; i<code.length(); i++)
        {
            keypad(ros,ans+code[i]);
        }
    }

    vector<string> letterCombinations(string digits)
    {
        if(digits.length()==0)return A;
        keypad(digits,"");
        return A;
    }
};
