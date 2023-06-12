#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
    int x,y,n;
    cin>>x>>y>>n;
    if(x==0 and y==0 and n==2)
        cout<<"Yes\n";
    else if((n-abs(x)-abs(y))%2==0 and (n-abs(x)-abs(y))>=0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

