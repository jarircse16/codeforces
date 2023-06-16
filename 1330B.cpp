#include<bits/stdc++.h>
using namespace std;
#define int long long
bool ok(set<int> s) {
	int S=0,n=s.size();
	for(int x:s) S+=x;
	if(S==n*(n+1)/2) return true;
	return false;
}
void solve() {
	int n;
	vector<pair<int,int>> ans;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	// chex
	set<int> s;
	int i;
	for(i=0;i<n;i++) {
		if(!s.count(v[i]))
			s.insert(v[i]);
		else break;
	}
	int l1=i;
	//cout<<l1<<endl;
	bool flag=false;
	if(ok(s)) {
		s.clear();
		for(;i<n;i++) {
			if(!s.count(v[i])) s.insert(v[i]);
			else {
				flag=true;
				break;
			}
		}
		if(ok(s) and flag==false) ans.push_back({l1,v.size()-l1});
	}
	
	reverse(v.begin(),v.end());
	s.clear();
	for(i=0;i<n;i++) {
		if(!s.count(v[i]))
			s.insert(v[i]);
		else break;
	}
	l1=i;
	flag=false;
	if(ok(s)) {
		s.clear();
		for(;i<n;i++) {
			if(!s.count(v[i])) s.insert(v[i]);
			else {
				flag=true;
				break;
			}
		}
		if(ok(s) and flag==false) ans.push_back({v.size()-l1,l1});
	}

	cout<<ans.size()<<endl;
	for(auto p:ans)
		cout<<p.first<<" "<<p.second<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
