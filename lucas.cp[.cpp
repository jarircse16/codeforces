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
