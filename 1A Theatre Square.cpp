#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main()
{
    int n,m,a;
    cin>>n>>m>>a;
    /*cout<<ceil(m/a*1.0) * ceil(n/a*1.0)<<endl; //double*/
    cout<<((m+a-1)/a)*((n+a-1)/a)<<endl; //int
    return 0;
}
