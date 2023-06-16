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
	int n,p;
	cin>>n>>p;
	string s;
	cin>>s;
	if(p>n/2) reverse(s.begin(),s.end()),p=n-p+1;
	s=gap+s;
	int i=1,j=s.size()-1,moves=0;
	vector<int> change;
	while(i<j) {
		if(s[i]==s[j]) i++,j--; else {
			change.push_back(i);
			if(s[i]<s[j]) swap(s[i],s[j]);
			moves+=min(s[i]-s[j],26+s[j]-s[i]);
			//cout<<s[i]<<' '<<s[j]<<endl;
			//cout<<s[i]-s[j]<<' '<<26+(s[j]-s[i])<<endl;
			i++,j--;
		}
	}
	if(change.size()==0) cout<<moves<<endl;
	else {
		//cout<<moves<<endl;
		sort(change.begin(),change.end());
		if(change[0]<p and change[change.size()-1]>p) 
		moves+=min((p-change[0])*2+change[change.size()-1]-p,(p-change[0])+2*(change[change.size()-1]-p));
		else if(change[change.size()-1]>p) moves+=change[change.size()-1]-p;
		else if(change[0]<p) moves+=p-change[0];
		cout<<moves<<endl;
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
