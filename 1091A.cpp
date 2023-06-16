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
	int y,b,r;
	cin>>y>>b>>r;
	int ans=0;
	for(int i=1;i<=y;i++) {
		int B=i+1;
		int R=i+2;
		if(B<=b and R<=r) ans=max(ans,i+B+R);
	}
	cout<<ans;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
