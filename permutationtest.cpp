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
	vector<int> v={1,2,3,4,5,6};
	int k=0;
	for(int x:v) k+=x;
	vector<int> final;
	do {
		for(int x:v) final.push_back(x);
	} while(next_permutation(v.begin(),v.end())); 
	int ans=0;
	for(int i=0;i+v.size()-1<final.size();i++) {
		int s=0;
		for(int j=0;j<v.size();j++) s+=final[i+j];
		if(s==k) ans++,cout<<i<<gap;	
	}
	cout<<endl<<ans;
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
