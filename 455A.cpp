#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100005];
int dp[100005];
int f(int n) {
	if(n<=0) return 0;
	if(dp[n]!=-1) return dp[n];
	return dp[n]=max(f(n-2)+a[n]*n,f(n-1));
} 
int32_t main() {
	int n,m=-(1<<30);
	memset(dp,-1,sizeof(dp));
	cin>>n;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		m=max(x,m);
		a[x]++;
	}
	cout<<f(m);
	return 0;
}
