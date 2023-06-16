#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,greater<int>());
	int i;
	double s=0.0;
	for(i=0;i<n;i++) {
		s+=a[i];
		if(s/(double)(i+1)<x) break;
	}
	cout<<i<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
