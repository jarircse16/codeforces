#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	int p=n/2;
	cout<<a[p]<<' ';
	int i=p-1,j=p+1;
	int x=0;
	while(x!=n-1) {
		if(i>=0) {
			cout<<a[i]<<' ';
			i--;
			x++;
		}
		if(j<n) {
			cout<<a[j]<<' ';
			j++;
			x++;
		}
	}
	cout<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
