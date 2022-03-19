class Solution
{
public:

    int par[20002];
    int sz[20002];

    void initSet(int n)
    {

        for(int i = 1; i <= n; i++)
        {
            par[i]=i;
            sz[i]=1;
        }
    }

    int _find(int r)
    {
        if(par[r]==r)
            return r;

        par[r]=_find(par[r]);
        return par[r];
    }


    int _union(int a, int b)
    {
        int u = _find(a);
        int v = _find(b);

        if(u==v)
        {
            return -1;
        }
        else
        {
            if(sz[u]<sz[v])
            {
                swap(u,v);
            }
            par[v]=u;
            sz[u]+=sz[v];
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        map<pair<int,int>,int>mp;

        int i , j;
        int n, m;
        m = grid[0].size();
        n = grid.size();

        int N;
        N = 0;
        for(i = 0; i < grid.size();i++){
            for(j = 0; j < grid[i].size();j++){
                if(grid[i][j]==1){
                    N++;
                    mp[{i,j}]=N;
                }
            }
        }

        initSet(N);

        for(i= 0; i < n; i++){
            for(j = 0; j < m; j++){
                if(grid[i][j]==1){
                    if(i-1 >= 0 && grid[i-1][j]==1){
                        _union(mp[{i,j}],mp[{i-1,j}]);
                    }
                    if(j-1>=0 && grid[i][j-1]==1){
                        _union(mp[{i,j}],mp[{i,j-1}]);
                    }
                    if(j+1 < m && grid[i][j+1]==1){
                        _union(mp[{i,j}],mp[{i,j+1}]);
                    }
                    if(i+1 < n && grid[i+1][j]==1){
                        _union(mp[{i,j}],mp[{i+1,j}]);
                    }
                }
            }
        }

        int mx = 0;
        for(i = 1; i <= N; i++){
            if(sz[i]>=mx){
                mx = sz[i];
            }
        }
        return mx;



    }
};
