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
	int n;
	cin>>n;
	vector<pair<int,int>> a(n,{0,1}); //first=strength second=size
	for(auto &x:a)cin>>x.first;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[j].first>=a[i].second)
			{
				a[j].first=min(a[i].first,a[j].first-a[i].second);
				a[j].second+=a[i].second;
				a[i].second=0;
				break;
			}
		}
	}
	//for(auto x:a) cout<<x.first<<gap<<x.second<<endl;
	int c=0;
	for(auto x:a) if(x.second!=0) c++;
	cout<<c<<endl;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
