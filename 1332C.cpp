#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
	int n,k;
	cin>>n>>k;
	string x,s[n/k];
	cin>>x;
	for(int i=0;i<n/k;i++) {
		string t="";
		for(int j=0;j<k;j++) {
			t+=x[j+k*i];
		}
		s[i]=t;
	}
	int start=0,end=k-1,ans=0;
	map<char,int> M;
	while(start<=end) {
		M.clear();
		if(start==end) { //odd
			for(int i=0;i<n/k;i++)
			M[s[i][start]]++;
			int m=0;
			for(auto p:M) m=max(m,p.second);
			ans+=n/k-m;
			break;
		}
		else { //even
			for(int i=0;i<n/k;i++)
			M[s[i][start]]++,M[s[i][end]]++;
			int m=0;
			for(auto p:M) m=max(m,p.second);
			ans+=2*n/k-m;
			start++,end--;
		}
	}
	cout<<ans<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
