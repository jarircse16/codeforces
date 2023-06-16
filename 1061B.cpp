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
	int n,m,ans=0LL;
	cin>>n>>m;
	vector<int> a(n);
	for(int &x:a) cin>>x;
	a.resize(n+1);
	a[n]=0;
	if(n==1) {
		cout<<0<<endl;
		return;
	}
	sort(a.rbegin(),a.rend());
	int now_make=a[0];
	for(int i=0;i<n;i++) {
		//if(a[i]==1) break;
		ans+=min(a[i]-1LL,a[i]+a[i+1]-now_make);
		now_make=min(now_make-1,a[i+1]);
	}
	cout<<ans;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
