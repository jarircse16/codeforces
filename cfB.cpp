#include<bits/stdc++.h>
using namespace std;
#define int long long
int k,A,B;
int f(int n) {
	if(n==1) return 0;
	if(n<k or k==1) return (n-1)*A;
	if(n%k!=0) return f(n-n%k)+A*(n%k);
	return min(f(n/k)+B,f(n/k)+A*(n-n/k));
}

int32_t main() {
	int n;
	cin>>n>>k>>A>>B;
	cout<<f(n);
}
