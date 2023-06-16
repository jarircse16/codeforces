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
	vector<int> v(n),r,a;
	for(int &x: v) cin>>x;
	sort(v.begin(),v.end());
	r=v;
	reverse(r.begin(),r.end());
	for(int i=0;i<n/2;i++) a.push_back(v[i]),a.push_back(r[i]);
	if(n&1) a.push_back(v[n/2]);
	reverse(a.begin(),a.end());
	for(int x:a) cout<<x<<gap;
	cout<<endl;
}
int32_t main() {
	fio
	testcase
	//solve();
	return 0;
}
