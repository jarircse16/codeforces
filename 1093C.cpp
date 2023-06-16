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
	vector<int> first_part;
	deque<int> second_part;
	int Max=LLONG_MAX,Min=0;
	for(int i=0;i<n/2;i++) {
		int b;
		cin>>b;
		int second=min(Max,b-Min);
		int first=b-second;
		first_part.push_back(b-second);
		second_part.push_front(second);
		Max=min(Max,second);
		Min=max(Min,first);
	}
	for(int i=0;i<n/2;i++) cout<<first_part[i]<<gap;
	for(int i=0;i<n/2;i++) cout<<second_part[i]<<gap;	
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
