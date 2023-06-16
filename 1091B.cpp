#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
	int n;
	cin>>n;
	int Min=1e18,Max=-1e18;
	vector<pair<int,int>> first(n),second(n);
	for(auto &x:first) cin>>x.first>>x.second;
	for(auto &x:second) cin>>x.first>>x.second;
	sort(first.begin(),first.end());
	sort(second.rbegin(),second.rend());
	cout<<first[0].first+second[0].first<<' '<<first[0].second+second[0].second;
}
int32_t main() {
	solve();
	return 0;
}
