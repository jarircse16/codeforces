#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005],c[230],v[230],p[200005][230];
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
	memset(p,0,sizeof(p));
	//optimizing previous solution using precalculation....
	p[0][a[0]]++;
	for(int i=1;i<n;i++)
	for(int j=1;j<=200;j++)
	if(a[i]==j) p[i][j]=p[i-1][j]+1; else p[i][j]=p[i-1][j];
	//cout<<p[n-1][2]<<endl;
	//
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++) c[a[i]]++;
	for(int i=1;i<=200;i++) {
		if(c[i]<2) continue;
		if(c[i]&1) c[i]--;
		int start=0,end=n-1,co=0;
		while(1) {
			while(a[start]!=i) start++;
			while(a[end]!=i) end--;
			if(a[start]==i and a[end]==i) start++,end--,co+=2;
			//
			memset(v,0,sizeof(v));
			//for(int i=start;i<=end;i++)
			//v[a[i]]++; // skip this O(n) loop and do sth faster
			// use precalculated values
			int M=0;
			for(int i=1;i<=200;i++) {
				if(start==0) // :(
				M=max(M,p[end][i]);
				else
				M=max(M,p[end][i]-p[start-1][i]);
			}
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
