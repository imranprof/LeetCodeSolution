class Solution {
public:
    string sumBinary(string a, string b){
        string sum;
        int carry = 0;
        int len = a.length();
        for(int i = 0; i < len; i++){
            if(carry == 1){
                if(a[i]=='1' && b[i]=='1'){
                    sum.push_back('1');
                    carry = 1;

                }
                else if(a[i]==b[i]){
                    sum.push_back('1');
                    carry = 0;
                }
                else{
                    sum.push_back('0');
                    carry = 1;

                }
            }
            else{
                if(a[i]=='1' && b[i]=='1'){
                    sum.push_back('0');
                    carry = 1;

                }
                else if(a[i]==b[i]){
                    sum.push_back('0');
                    carry = 0;
                }
                else{
                    sum.push_back('1');
                    carry = 0;
                }
            }
        }
        if(carry)sum.push_back('1');


        reverse(sum.begin(),sum.end());
        return sum;

    }

    string addBinary(string a, string b) {

        int i, j;

        int lena = a.length();
        int lenb = b.length();

        int dif =  abs(lena-lenb);

        if(lena < lenb){
            for(i = 0; i < dif; i++){
                a = "0"+a;
            }
        }
        else if(lenb < lena){
            for(i = 0; i < dif; i++){
                b = "0"+b;
            }
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        return sumBinary(a,b);



            //end
        }




};
