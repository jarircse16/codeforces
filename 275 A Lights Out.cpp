#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool check(int i,int j) {
    if(i<0 or j<0 or i>=3 or j>=3) return false;
    return true;
}
int main()
{
    int grid[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    grid[i][j]=1;
    int a[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
        a[i][j]%=2;
        if(a[i][j]==0) continue;

        grid[i][j]=1-grid[i][j];
        for(int k=0;k<4;k++) {
            int x=i+dx[k],y=j+dy[k];
            if(check(x,y)==false) continue;
            grid[x][y]=1-grid[x][y];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        cout<<grid[i][j];
        cout<<endl;
    }
}
