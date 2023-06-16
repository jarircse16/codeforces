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
	vector<int> v={5,4};
	adjacent_difference(v.begin(),v.end(),v.begin());
	v.erase(v.begin());
	for(int x:v) cout<<x<<endl;
	if(max_element(v.begin(),v.end())==v.end()) cout<<23123;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
