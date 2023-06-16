#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
#define int long long
int f(int x) {
	if(x<0) return 0;
	return (1<<x);
}
void solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int i,x=-1;
	for(i=1;i<n;i++) {
		if(a[i]<a[i-1]) {
			int j=i;
			while(a[j+1]<a[i-1] and a[j+1]>a[j]) j++;
			int XX=a[i-1]-a[i]+f(x-1);
			//cout<<"XX: "<<XX<<endl;
			int y=(int)log2((double)XX); 
			//cout<<"Y: "<<y<<endl;
			//cout<<" - "<<((1<<y)-f(x-1))<<endl;
			//cout<<" -- "<<a[i-1]-a[i]<<endl;
			if(((1<<y)-f(x-1))<(a[i-1]-a[i])) y++;
			x=y;
			i=j;
			a[i]+=f(x);
		}
	}
	cout<<x+1<<endl;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
