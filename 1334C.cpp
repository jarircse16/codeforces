#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[2*300000+5],b[2*300000+5],used[2*300000+5];
void solve() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>b[i];
		a[i+n]=a[i];
		b[i+n]=b[i];
	}
	used[1]=0;
	long long ans=1e18;
	for(int i=2;i<2*n;i++) {
		if(a[i]<=b[i-1])
			used[i]=used[i-1];
		else
			used[i]=used[i-1]+a[i]-b[i-1];
		if(i>=n)
			ans=min(ans,used[i]-used[i-n+1]+a[i-n+1]);
	}
	cout<<ans<<endl;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
