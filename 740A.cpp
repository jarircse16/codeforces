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

int dp[100001];
int n,a,b,c;

void solve() {
	cin>>n>>a>>b>>c;
	dp[0]=0;
	for(int i=1;i<=100000;i++) {
		int r=dp[i-1]+a;
		if(i>=2) r=min(r,dp[i-2]+b);
		if(i>=3) r=min(r,dp[i-3]+c);
		dp[i]=r;
	}
	int cost=LLONG_MAX;
	for(int i=0;i<=100;i++)
	if((n+i)%4==0) cost=min(cost,dp[i]);
	cout<<cost<<endl;
}

int32_t main() {
	//fio
	//testcase
	solve();
	return 0;
}
