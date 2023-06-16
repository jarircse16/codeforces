#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	if(k==0) cout<<s;
	else if(n==1) cout<<0;
	else {
		if(s[0]!='1') s[0]='1',k--;
		for(int i=1;i<s.size() and k!=0;i++)
		if(s[i]!='0') s[i]='0',k--;
		cout<<s; 
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
