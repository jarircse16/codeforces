#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 999377;

int F[MOD],MI[MOD];
int BM(int a,int b,int r=1) {
	while(b) {
		if(b&1) r=r*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return r;
}
int __MI(int x) { 
	return BM(x,MOD-2);
}
int C(int n,int r) {
	if(n<r or r<0) return 0;
	return F[n]*(MI[r]%MOD)*MI[n-r]%MOD;
}
int32_t main() {
	F[0]=1;
	for(int i=1;i<MOD;i++)F[i]=(i*F[i-1])%MOD;
	MI[MOD-1]=__MI(F[MOD-1]);
	for(int i=MOD-2;i>=0;i--) MI[i]=(MI[i+1]%MOD*(i+1) %MOD)%MOD;
	int T;
	cin>>T;
	for(int t=1;t<=T;t++) {
		int n;
		cin>>n;
		int r=n;
		n=n+n;
		int ans=1;
		while(n) {
			int N=n%MOD;
			int R=r%MOD;
			ans*=C(N,R)%MOD;
			n/=MOD,r/=MOD;
		}
		cout<<"Case "<<t<<": "<<ans<<endl;
	}
}
