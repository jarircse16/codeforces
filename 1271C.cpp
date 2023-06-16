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
	int cx,cy;
	cin>>cx>>cy;
	vector<pair<int,int>> v(n);
	for(auto &x:v) {
		cin>>x.first>>x.second;
		x.first-=cx;
		x.second-=cy;
	}
	vector<int> a(4,0),b; //+ve x,-ve x,+ve y,-ve y
	for(auto x:v) {
		if(x.first>0) a[0]++;
		if(x.first<0) a[1]++;
		if(x.second>0) a[2]++;
		if(x.second<0) a[3]++;
	}
	int x,y;
	b=a;
	sort(a.begin(),a.end());
	if(a[3]==b[0]) x=1,y=0;
	else if(a[3]==b[1]) x=-1,y=0;
	else if(a[3]==b[2]) x=0,y=1;
	else if(a[3]==b[3]) x=0,y=-1;
	cout<<a[3]<<endl;
	cout<<x+cx<<gap<<y+cy<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
