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

pair<int,int> jinis[100005]; ///lagbe,ache
int n,k;

bool possible(int x,int magic) {
	for(int i=0;i<n;i++) {
		if(jinis[i].first*x<=jinis[i].second) continue;
		int need_magic=jinis[i].first*x-jinis[i].second;
		if(magic<need_magic) return false;
		magic-=need_magic;
	}
	return true;
}
void solve() {
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>jinis[i].first;
	for(int i=0;i<n;i++) cin>>jinis[i].second;
	int lo=0,hi=2e9+5,m;
	int loop=50;
	while(loop--) {
		m=(lo+hi)/2;
		if(possible(m,k)) lo=m+1;
		else hi=m-1;
	}
	cout<<m<<endl;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
