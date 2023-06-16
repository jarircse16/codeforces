#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n,mx=-(1LL<<59),mxd=-(1LL<<59);
	cin>>n;
	while(n--) {
		int x;
		cin>>x;
		mx=max(mx,x);
		mxd=max(mxd,mx-x);
	}
	int ans=0;
	while(mxd) mxd/=2,ans++;
	cout<<ans<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
