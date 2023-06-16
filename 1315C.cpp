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
	vector<int> given(n),ans;
	set<int> left;
	for(int i=1;i<=2*n;i++) left.insert(i);
	for(int &x:given) { cin>>x; left.erase(x); }
	bool flag=false;
	for(int x:given) {
		auto pos=left.upper_bound(x);
		if(pos==left.end()) {
			flag=true;
			break;
		}
		ans.push_back(x);
		ans.push_back(*pos);
		left.erase(pos);	
	}
	if(flag) cout<<-1;
	else for(int x:ans) cout<<x<<gap;
	cout<<endl;
}

int32_t main() {
	//fio
	testcase
	//solve();
	return 0;
}
