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

int f(int n,int d) {
	return (n*(2+(n-1)*d))/2;
}
void solve() {
	int n;
	cin>>n;
	set<int> v;
	for(int i=1;i<=sqrt(n);i++) {
		if(n%i==0) {
			int j=n/i;
			v.insert(f(i,j));
			v.insert(f(j,i));
		}
	}
	for(int x:v) cout<<x<<gap;
}

int32_t main() {
	//fio
	//testcase
	solve();
	return 0;
}
