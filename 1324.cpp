#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++) c[i]=a[i]-b[i];
	int r=0;
	for(int i=0;i<n;i++) {
		int j=upper_bound(a,a+n,-c[i])-a;
		r+=n-j;
	}
	cout<<r<<endl;
}
	
