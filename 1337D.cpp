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
int f(int x,int y,int z) {
	return (x-y)*(x-y)+(y-z)*(y-z)+(z-x)*(z-x);
}
int search(vector<int> X,vector<int> Y,vector<int> Z) {
	int result=LLONG_MAX;
	for(int y:Y) {
		int x=upper_bound(X.begin(),X.end(),y)-X.begin()-1;
		int z=lower_bound(Z.begin(),Z.end(),y)-Z.begin();
		if(x==-1 or z==Z.size()) continue;
		result=min(result,f(X[x],y,Z[z]));
		//cout<<f(X[x],y,Z[z])<<endl;
	}
	return result;
}
void solve() {
	int r,g,b;
	cin>>r>>g>>b;
	vector<int> R(r),G(g),B(b);
	for(int &x:R) cin>>x;
	for(int &x:G) cin>>x;
	for(int &x:B) cin>>x;
	sort(R.begin(),R.end());
	sort(G.begin(),G.end());
	sort(B.begin(),B.end());
	int result=LLONG_MAX;
	result=min(result,search(R,G,B));
	result=min(result,search(B,G,R));
	result=min(result,search(G,B,R));
	result=min(result,search(R,B,G));
	result=min(result,search(G,R,B));
	result=min(result,search(B,R,G));
	cout<<result<<endl;
}
int32_t main() {
	fio
	testcase
	//solve();
	return 0;
}
