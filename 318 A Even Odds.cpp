#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,k;
    cin>>n>>k;
    int odds=ceil(n/2.0);
    int evens=n-odds;

    if(k<=odds)
        cout<<1+(k-1)*2;
    else
    {
        k-=odds;
        cout<<2+(k-1)*2;
    }

    return 0;


}
