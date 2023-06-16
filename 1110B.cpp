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
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v(n),d;
	for(int &x:v) cin>>x;
	for(int i=0;i<n-1;i++)
		d.push_back(v[i+1]-v[i]-1);
	sort(d.begin(),d.end());
	int take=n-k,ans=n;
	for(int i=0;i<d.size() and take;i++) {
		//cout<<d[i]<<endl;
		ans+=d[i];
		take--;
	}
	cout<<ans;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
