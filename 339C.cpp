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
int m;
int32_t dp[100][11][1001];
int32_t	path[100][11][1001];
vector<int> weights;
int32_t f(int d,int last,int k) {
	if(k%2==1 and k>0 and d<=50) return 0;
	if(k%2==0 and k>0 and d>=50) return 0;
	if(k==m) return 1;
	if(dp[d][last][k]!=-1) return dp[d][last][k];
	for(int w:weights) {
		int32_t now=0;
		if(w==last) continue;
		if(k%2==0) now=f(d+w,w,k+1);
		else now=f(d-w,w,k+1);
		if(now) {
			path[d][last][k]=w;
			return dp[d][last][k]=1;
		}
	}
	return dp[d][last][k]=0;
}
void print(int d,int last,int k) {
	if(k%2==1 and k>0 and d<=50) return;
	if(k%2==0 and k>0 and d>=50) return;
	if(k==m) return;
	int w=path[d][last][k];
	cout<<w<<gap;
	if(k%2==0) print(d+w,w,k+1);
	else print(d-w,w,k+1);
}
void solve() {
	string s;
	cin>>s;
	for(int i=0;i<10;i++) if(s[i]=='1') weights.push_back(i+1);
	cin>>m;
	memset(dp,-1,sizeof(dp));
	int32_t can=f(50,0,0);
	if(can) {
		cout<<"YES\n";print(50,0,0);
	}
	else cout<<"NO\n";
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
