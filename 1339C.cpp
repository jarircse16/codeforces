#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
	int n;
	cin>>n;
	int P=0,C=0;
	bool flag=false;
	while(n--) {
		int p,c;
		cin>>p>>c;
		if(p<c) flag=true;
		if(p<P or c<C) flag=true;
		if(c>C) {
			if((p-P)<(c-C)) flag=true;
		}
		P=max(p,P);
		C=max(c,C);
	}
	if(flag) cout<<"NO\n"; else cout<<"YES\n";
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
