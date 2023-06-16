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
bool cmp(pair<int,int> a,pair<int,int> b) {
	if(a.first+a.second==b.first+b.second) return a.first<b.first;
	return a.first+a.second<b.first+b.second;
}
void solve() {
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int s=0;s<1e6/7+5;s++) {
		if((n-s*7)%4==0 and (n-s*7)>=0)
		v.push_back({s,(n-s*7)/4});
	}
	sort(v.begin(),v.end(),cmp);
	if(v.size()==0) cout<<-1<<endl;
	else {
		for(int i=0;i<v[0].second;i++) cout<<4;
		for(int i=0;i<v[0].first;i++) cout<<7;
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
