#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
#define gap ' '
#define endl '\n'
using namespace std;

int grid[101][101];
void solve() {
	int x,y,minX,maxX,minY,maxY;
	minX=minY=INT_MAX;
	maxX=maxY=-1;
	int on=0;
	cin>>x>>y;
	for(int i=0;i<x;i++) {
		for(int j=0;j<y;j++) {
			char c;
			cin>>c;
			if(c=='B') {
				on++;
				minX=min(minX,i);
				maxX=max(maxX,i);
				minY=min(minY,j);
				maxY=max(maxY,j);
			}
		}
	}
	if(on==0) cout<<1<<endl;
	else {
		int arm=max(maxX-minX+1,maxY-minY+1);
		if(x<arm or y<arm) cout<<-1<<endl; else
		cout<<arm*arm-on<<endl;
	}
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
