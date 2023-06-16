#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int unsigned long long
using namespace std;
int MOD=1e9+7;
using u64 = uint64_t;
u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = result * base % mod;
        base = base * base % mod;
        e >>= 1;
    }
    return result;
}
vector<int> p;
int h(int x,int p) {
	int r=0;
	while(x) {
		x/=p;
		r+=x;
	}
	return r;
}
void solve() {
	int x,n;
	cin>>x>>n;
	for(int i=2;i*i<=x;i++) {
		if(x%i!=0) continue;
		int o=x/i;
		while(x%i==0) x/=i;
		p.push_back(i);
	}
	if(x!=1) p.push_back(x);
	//cout<<p.size()<<endl;
	int r=1;
	for(int i:p) {
		int k=h(n,i);
		//cout<<k<<endl;
		r*=binpower(i,k,MOD);
		r%=MOD;
	}
	cout<<r;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
