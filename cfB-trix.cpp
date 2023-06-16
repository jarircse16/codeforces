
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include<bits/stdc++.h>
using namespace std;
#define int long long
int k,A,B;
int f(int n) {
	if(n==1) return 0;
	if(n<k or k==1) return (n-1)*A;
	if(n%k!=0) return f(n-1)+A;
	return min(f(n/k)+B,f(n/k)+A*(n-n/k));
}

int32_t main() {
	int n;
	cin>>n>>k>>A>>B;
	cout<<f(n);
}
