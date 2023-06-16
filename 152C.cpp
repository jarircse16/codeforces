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
set<char> M[101];
int mod=1e9+7;
void solve() {
	int n,k;
	cin>>n>>k;
	string a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	for(int p=0;p<k;p++) {
		M[p].insert(a[i][p]);
	}
	int r=1;
	for(int i=0;i<k;i++) {
		if(M[i].size()==0) continue;
		r*=M[i].size();
		r%=mod;
	}
	cout<<r;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
