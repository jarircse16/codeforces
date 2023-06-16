#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	int n;
	cin>>n;
	int a[n],p1[n],p2[n],c[n];
	cin>>a[0];
	p1[0]=a[0];
	for(int i=1;i<n;i++) {
		cin>>a[i];
		p1[i]=p1[i-1]+a[i];
	}
	if(p1[n-1]%3!=0) {
		cout<<0;
		return 0;
	}
	int A=0;
	p2[n-1]=a[n-1];
	c[n-1]=p2[n-1]==p1[n-1]/3;
	for(int i=n-2;i>=0;i--) p2[i]=p2[i+1]+a[i];
	for(int i=n-2;i>=0;i--) c[i]=p2[i]==p1[n-1]/3;
	for(int i=n-2;i>=0;i--) c[i]+=c[i+1];
	for(int i=0;i+2<n;i++) if(p1[i]==p1[n-1]/3) A+=c[i+2];
	cout<<A;
}
