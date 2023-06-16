#include<bits/stdc++.h>
using namespace std;
#define int long long
long long F(int A, int B, int C, long long x)  {
    long long res = A * x * x + B * x + C ;
    return res;
}
int32_t main() {
	int T;
	cin>>T;
	while(T--) {
		int a,b,c,l,r;
		cin>>a>>b>>c>>l>>r;
		int lo=1,hi=1e9,m;
		int L=1e18,R=-1e18;
		int loop=100;
		while(lo<=hi) {
			m=(lo+hi)/2;
			if(l<=F(a,b,c,m) and F(a,b,c,m)<=r) {
				L=m;
				hi=m-1;
			}
			else if(F(a,b,c,m)<l) lo=m+1;
			else hi=m-1; 
		}
		loop=100;
		lo=1;
		hi=1e9;
		while(lo<=hi) {
			m=(lo+hi)/2;
			if(l<=F(a,b,c,m) and F(a,b,c,m)<=r) {
				R=m;
				lo=m+1;
			}
			else if(F(a,b,c,m)<l) lo=m+1;
			else hi=m-1; 
		}
	//	cout<<L<<","<<R<<endl;
		cout<<R-L+1<<endl;
	}
}
