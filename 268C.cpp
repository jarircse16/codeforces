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
	int n,m;
	cin>>n>>m;
	int N=min(n,m);
	cout<<N+1<<endl;
	for(int i=0;i<=N;i++)
	cout<<i<<gap<<N-i<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
