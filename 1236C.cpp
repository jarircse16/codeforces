#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
#define gap ' '
#define endl '\n'
using namespace std;

void solve() {
	int n;
	cin>>n;
	vector<vector<int>> v(n);
	int x=0,a=1;
	for(int i=1;i<=n*n;i++) {
		v[x].push_back(i);
		x+=a;
		if(i%n==0) {
			int t=i/n;
			if(t&1) x=n-1,a=-1; else x=0,a=1;
		}
	}
	for(auto r:v) {
		for(int c:r) cout<<c<<gap;
		cout<<endl;
	}
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
