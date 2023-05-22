#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int p[N][N], n, m, sum;
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};

int dfs(int x,int y)
{
    if(!p[x][y])
        return 0;
    sum+=p[x][y];
    p[x][y]=0;
    for(int i=0; i<4; i++)
    {
        int wx=x+dx[i];
        int wy=y+dy[i];
        if(wx>0&&wx<=n&&wy>0&&wy<=m&&p[wx][wy])
            dfs(wx,wy);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int dd=0;
        cin>>n>>m;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                cin>>p[i][j];
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
            {
                sum=0;
                dd=max(dfs(i,j),dd);
            }
        cout<<dd<<"\n";
    }
    return 0;
}
