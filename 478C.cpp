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
	vector<int> v(3);
	for(int &x:v) cin>>x;
	sort(v.begin(),v.end());
	int r=(v[0]+v[1]+v[2])/3;
	if(v[0]+v[1]<r) r=v[0]+v[1];
	cout<<r;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
