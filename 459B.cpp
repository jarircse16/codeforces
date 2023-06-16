#include<bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> M;
int32_t main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		M[x]++;
	}
	cout<<M.rbegin()->first-M.begin()->first<<' ';
	if(M.rbegin()->first-M.begin()->first==0) {
		cout<<(M.rbegin()->second*(M.rbegin()->second-1))/2;
	} else
	cout<<M.rbegin()->second*M.begin()->second;
}
