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
int k,d;
int M=1e9+7;
int dp[101][101];
int f(int n,int c) {
	//cout<<n<<gap<<c<<endl;
	if(n==0 and c==1) return 1;
	if(n==0) return 0;
	if(dp[n][c]!=-1) return dp[n][c];
	int a=0;
	for(int i=1;i<=k;i++) {
		if(n-i>=0)
		a+=f(n-i,c or i>=d);
		a%=M;
	}
	return dp[n][c]=a;
}
void solve() {
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n>>k>>d;
	cout<<f(n,0);
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
