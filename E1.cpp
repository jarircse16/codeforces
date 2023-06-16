#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[2005],c[30],v[30];
void solve() {
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	if(n==1) {
		cout<<1<<endl;
		return;
	}
	if(n==2) {
		if(a[0]==a[1]) cout<<2<<endl;
		else cout<<1<<endl;
		return;
	}
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++) c[a[i]]++;
	for(int i=1;i<=26;i++) {
		if(c[i]<2) continue;
		if(c[i]&1) c[i]--;
		int start=0,end=n-1,co=0;
		while(1) {
			while(a[start]!=i) start++;
			while(a[end]!=i) end--;
			if(a[start]==i and a[end]==i) start++,end--,co+=2;
			//
			memset(v,0,sizeof(v));
			for(int i=start;i<=end;i++)
			v[a[i]]++;
			int M=0;
			for(int i=1;i<=26;i++) M=max(M,v[i]);
			ans=max(ans,M+co);
			//
			if(co==c[i]) break;
		}
		//cout<<co<<" "<<M<<endl;
	}
	cout<<(ans==0?1:ans)<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
}
