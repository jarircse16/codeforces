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
	string s;
	cin>>s;
	vector<int> black,white,ans;
	for(int i=0;i<s.size();i++) if(s[i]=='B') black.push_back(i); else white.push_back(i);
	if(black.size()%2==0) {
		int index=0;
		while(index<black.size()) {
			while(s[black[index]+1]=='W') ans.push_back(black[index]),black[index]++;
			ans.push_back(black[index]);
			index+=2;
		}
		cout<<ans.size()<<endl;
		for(int x:ans) cout<<x+1<<gap;
	}
	else if(white.size()%2==0) {
		int index=0;
		while(index<white.size()) {
			while(s[white[index]+1]=='B') ans.push_back(white[index]),white[index]++;
			ans.push_back(white[index]);
			index+=2;
		}
		cout<<ans.size()<<endl;
		for(int x:ans) cout<<x+1<<gap;
	}
	else cout<<-1<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
