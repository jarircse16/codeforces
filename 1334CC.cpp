#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n,s=0;
	cin>>n;
	int a[n],b[n],p[n];
	for(int i=0;i<n;i++) cin>>a[i]>>b[i];
	for(int i=0;i<n;i++) {
		if(i==0) p[i]=max(a[i]-b[n-1],0LL);
		else p[i]=max(0LL,a[i]-b[i-1]);
		s+=p[i];
	}
	int A=1e18;
	for(int i=0;i<n;i++) A=min(A,s-p[i]+a[i]);
	cout<<A<<endl; 
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
