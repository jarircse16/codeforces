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
	int n;
	cin>>n;
	int c=0;
	for(int i=1;;i++) {
		bitset<64> bs(i);
		string binary=bs.to_string();
		int decimal=stoll(binary);
		if(decimal<=n) c++;
		else break;
	}	
	cout<<c;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
