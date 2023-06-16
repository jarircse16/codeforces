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

bool ok(ld d,vector<int> a,ld end) {
	ld Min=0,l,r;
	for(int x:a) {
		l=x-d,r=x+d;
		if(max(l,Min)!=Min) return false;
		Min=r;
	}
	if(min(r,end)!=end) return false;
	return true;
}
void solve() {
	int n,l;
	cin>>n>>l;
	vector<int> a(n);
	for(auto &x:a)cin>>x;
	sort(a.begin(),a.end());
	//for(auto &x:a)cout<<x<<' ';
	//cout<<endl;
	ld lo=0.0,hi=1e9+1,m;
	int loop=1000;
	while(loop--) {
		m=(lo+hi)/2.0;
		if(ok(m,a,l)) hi=m;
		else lo=m;
	}
	cout<<fixed<<setprecision(15)<<m<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
