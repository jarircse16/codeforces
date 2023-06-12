#include<bits/stdc++.h>
using namespace std;

//int mini(int a,int b)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b,d1,d2;
        cin>>n>>x>>a>>b;
        d1=abs(a-b);
        int ans=d1;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                int d2=abs(i-j);
                if(d2>d1+x) continue;
                ans=max(ans,d2);
            }
        cout<<ans<<endl;

    }
    return 0;

}
