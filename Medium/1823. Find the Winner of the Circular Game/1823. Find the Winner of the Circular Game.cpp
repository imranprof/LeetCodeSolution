



class Solution {
public:
    int Winner(int nw, vector<int>v, int k){
        if(v.size()==1){
            return v[0];
        }

        nw = (nw+k)%(v.size());

        //cout<<"now = "<<nw<<endl;
        vector<int>::iterator it;

        it = v.begin()+nw;
        /*
        cout<<"it "<<*it<<endl;

        for(int i = 0; i < v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
*/
        v.erase(it);
        return Winner(nw-1,v,k);

    }

    int findTheWinner(int n, int k) {
        int i;
        vector<int>v;
        for(i = 1; i<=n;i++){
            v.push_back(i);
        }
        int ans = Winner(-1,v,k);
        return ans;

    }
};



//another o(n) solution by  josephus problem
class Solution {
public:


    int findTheWinner(int n, int k) {
        if(n == 1){
            return 1;
        }

        return (findTheWinner(n-1,k)+k-1)%n+1;

    }
};
