#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
#define ld long double
#define ll long long
using namespace std;

void solve() {
	int n,l;
	cin>>n>>l;
	vector<int> a(n);
	for(auto &x:a)cin>>x;
	sort(a.begin(),a.end());
	vector<int> b(n);
	adjacent_difference(a.begin(),a.end(),b.begin());
	b.erase(b.begin());
	int d=*max_element(b.begin(),b.end());
	cout<<d<<endl;
	ld x=(double)d/2.0;
	x=max(x,(ld)a[0]);
	x=max(x,(ld)(l-a[a.size()-1]));
	cout<<fixed<<setprecision(10)<<x<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
