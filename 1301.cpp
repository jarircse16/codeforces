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
	int n,o;
	cin>>n>>o;
	int s=n*(n+1)/2;
	int z=n-o,ans=0;
	if(z<=o+1) {
		cout<<s-z<<endl;
		return;
	}
	if(z%(o+1)==0) {
		int size=z/(o+1);
		ans=(o+1)*size*(size+1)/2;
	}
	else {
		int a=floor((double)z/(double)(o+1));
		int b=ceil((double)z/(double)(o+1));
		int x=(z-b*(o+1))/(a-b);
		int y=(a*(o+1)-z)/(a-b);
		ans=x*a*(a+1)/2+y*b*(b+1)/2;
	}
	cout<<s-ans<<endl;	
}

int32_t main() {
	fio
	testcase
	//solve();
	return 0;
}
