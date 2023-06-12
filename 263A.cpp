#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5],i,j,v1,v2,moves;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            cin>>a[i][j];

    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            {
                if(a[i][j]==1)
                {
                    v1=i+1;
                    v2=j+1;
                }
            }
    moves=abs(v1-3)+abs(v2-3);
    cout<<moves<<endl;
}


