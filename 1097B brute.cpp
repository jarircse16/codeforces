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
	vector<int> v(n);
	for(int &x:v) cin>>x;
	bool flag=false;
	for(int i=0;i<(1<<n);i++) {
		int s=0;
		for(int j=0;j<n;j++) if(i&(1<<j)) s+=-v[j]; else s+=v[j];
		if(s%360==0) {
			flag=true;
			break;
		}
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
