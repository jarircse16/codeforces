#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> ans;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int maax=-1;
	for(int i=0;i<n;i++) {
		vector<int> in;
		for(int j=0;j<n;j++)
		in.push_back(a[j]);
		long long s=0;
		for(int j=0;j<n;j++) {
			in[j]=min(in[j],a[j]);
			s+=in[j];
		}
		if(s>maax) {
			maax=s;
			ans=in;
		}
	}
	for(int i:ans) {
		cout<<i<<" ";
	}
}
