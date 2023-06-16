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

int32_t main() {
	//fio
	//testcase
	//solve();
	vector<int> v={1};
	cout<<upper_bound(v.begin(),v.end(),3)-v.begin()-1;
	cout<<lower_bound(v.begin(),v.end(),3)-v.begin();
	return 0;
}
