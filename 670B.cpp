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
	int n,k;
	cin>>n>>k;
	int x=ceil((-1.0+sqrt(1.0+8.0*k))/2.0)-1;
	vector<int> v(n+1);
	for(int i=1;i<=n;i++) cin>>v[i];
	cout<<v[k-x*(x+1)/2]<<endl;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
