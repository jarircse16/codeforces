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
	int n;
	cin>>n;
	vector<int> a(n);
	for(int &x:a) cin>>x;
	sort(a.begin(),a.end());
	if(n==1) {
		cout<<-1;
	}
	else if(n==2 and a[0]==a[1]) {
		cout<<1<<endl;
		cout<<a[0]<<endl;
	}
	else if(n==2) {
		if((a[0]+a[1])%2==0) {
			cout<<3<<endl;
			int d=a[1]-a[0];
			cout<<a[0]-d<<gap<<(a[0]+a[1])/2<<gap<<a[1]+d<<endl;
		}
		else {
			cout<<2<<endl;
			int d=a[1]-a[0];
			cout<<a[0]-d<<gap<<a[1]+d<<endl;
		}
	}
	else {
		map<int,int> map;
		for(int i=1;i<n;i++) {
			int k=a[i]-a[i-1];
			map[k]++;
		}
		if(map.size()>=3) cout<<0<<endl;
		else if(map.size()==2 and map.rbegin()->second>=2) cout<<0<<endl;
		else if(map.size()==2 and map.rbegin()->first==2*map.begin()->first) {
			cout<<1<<endl;
			for(int i=1;i<n;i++) {
				int k=a[i]-a[i-1];
				if(k==map.rbegin()->first) {
					cout<<(a[i]+a[i-1])/2<<endl;
					break;
				}
			}
		}
		else if(map.size()==1 and map.begin()->first==0) {
			cout<<1<<endl;
			cout<<a[0]<<endl;
		}
		else if(map.size()==1) {
			cout<<2<<endl;
			cout<<a[0]-map.begin()->first<<gap<<a[n-1]+map.begin()->first<<endl;
		}
		else cout<<0<<endl;
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
