#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++) cin>>a[i].first>>a[i].second;
	sort(a,a+n);
	int now=0;
	for(int i=0;i<n;i++) {
		if(a[i].first>=a[i].second and a[i].second>=now) now=a[i].second;
		else now=a[i].first;
	}
	cout<<now;
	return 0;
}
