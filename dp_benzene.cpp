#include<bits/stdc++.h>
using namespace std;
#define int long long
const int p=6,r=3;
int dp[p+5][r+5][p+5];

int f(int x,int c,int start) {
	//cout<<x<<' '<<c<<' '<<start<<'\n';
	if(x==0 and c==0) return 1;
	if(x==0 or c==0) return 0;
	if(dp[x][c][start]!=-1) return dp[x][c][start];
	int a=0;
	for(int i=start;i<=p;i++) {
		if(x-i>=0)
		a+=f(x-i,c-1,1);
	}
	return dp[x][c][start]=a;
}
int32_t main() {
	memset(dp,-1,sizeof(dp));
	cout<<f(p,r,1);
}
