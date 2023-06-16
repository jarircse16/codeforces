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
	string s;
	cin>>s;
	int a,b;
	cin>>a>>b;
	int n=s.size();
	vector<int> first(n),last(n);
	first[0]=(s[0]-'0')%a;
	for(int i=1;i<n;i++) first[i]=(first[i-1]*10+s[i]-'0')%a;
	last[n-1]=(s[n-1]-'0')%b;
	for(int i=n-2;i>=n;i--) first[i]=(first[i+1]+(s[i]-'0')*10)%b;
	int to=-1;
	for(int i=0;i<n-1;i++) if(first[i]==0) {
		//cout<<i<<gap<<last[i+1]<<endl;
		if(last[i+1]==0) {
			to=max(to,i);
		}
	}
	if(to==-1 or (to+1==n-1 and s[n-1]=='0')) cout<<"NO\n";
	else {
		cout<<"YES\n";
		for(int j=0;j<=to;j++) cout<<s[j];
		cout<<endl;
		for(int j=to+1;j<n;j++) cout<<s[j];
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
