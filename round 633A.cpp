#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int F[100];
int f(int x) {
	if(x==0) return 1;
	if(F[x]!=0) return F[x];
	return F[x]=x*f(x-1);
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		cout<<n<<endl;
	}
	return 0;
}
