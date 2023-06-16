#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long

int f(int n,int p) {
	int s=0,x=1;
	for(int i=1;i<=n;i++)
	s+=(p*x)%10,x++;
	return s;
}
void solve() {
	int n,m;
	cin>>n>>m;
	int c=n/m;
	int full=c/10LL,extra=c%10LL;
	cout<<full*f(10,m)+f(extra,m)<<endl;
}
int32_t main() {
	//cout<<f(10,1);
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
