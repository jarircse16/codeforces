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
	cin>>n;
	map<int,int> scientists;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		scientists[x]++;
	}
	cin>>m;
	vector<pair<int,int>> movies(m);
	vector<pair<int,int>> priority;
	for(auto &x:movies) cin>>x.first;
	for(auto &x:movies) cin>>x.second;
	for(auto p:scientists) priority.push_back({p.second,p.first});
	
	vector<pair<pair<int,int>,int>> status; //pleased,satisfied,index
	for(int i=0;i<m;i++) {
		auto x=movies[i];
		status.push_back({{scientists[x.first],scientists[x.second]},i+1});
	}
	sort(status.rbegin(),status.rend());
	cout<<status[0].second<<endl;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
