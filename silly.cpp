#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 2*acos(0.0)
#define f first
#define s second
#define pb push_back
#define gap ' '
#define fastio {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mod 1000000007

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,l,r;
        scanf("%lld %lld %lld",&n,&l,&r);
        ll x=0;
        vector<int> v;
        for(ll i=1,j=n-1;i<n;i++,j--)
        {
            if(x+2LL*j<l) x+=(2LL*j);
            else{
                for(int k=i+1;k<=n;k++)
                {
                    x++;
                    if(x>=l && x<=r) v.pb(i);
                    x++;
                    if(x>=l && x<=r) v.pb(k);
                }
                if(x>=r) break;
            }
            if(x>=r) break;
        }
        if(r==(n*(n-1))+1) v.pb(1);
        for(int i=0;i<v.size();i++) printf("%d ",v[i]);
        printf("\n");
    }

}

