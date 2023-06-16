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

int n;

double sq(double x) {
	return x*x;
}
int solve_k(double x) {
	double root=((2.0*n-1.0)-sqrt(sq(2.0*n-1.0)-8.0*x))/2.0;
	if(root<0) root*=-1.0;
	return ceil(root);
}
int get_odd(int x) {
	int k=solve_k(x);
	return k;
}
int get_even(int x) {
	int k=solve_k(x);
	int ki=k-1;
	int t=x-n*ki+ki*(ki+1)/2;
	return t+k;
}
void solve() {
	int l,r;
	cin>>n>>l>>r;
	int to=min(n*(n-1),r);
	for(int i=l;i<=to;i++) {
		if(i&1) cout<<get_odd((i+1)/2)<<gap;
		else cout<<get_even(i/2)<<gap;
	}
	if(r==n*(n-1)+1) cout<<1;
	cout<<endl;
}
int32_t main() {
	fio
	testcase
	return 0;
}
