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
struct HASH{
  size_t operator()(const pair<int,int>&x)const{
    return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
  }
};
void solve() {
	int n;
	cin>>n;
	vector<vector<int>> v(n,vector<int>(n));
	unordered_map<pair<int,int>,int,HASH> hash;
	hash.reserve(32768); //updated !
  	hash.max_load_factor(0.25); //updated !
	for(auto &a:v) for(int &x:a) cin>>x;
	for(int i=0;i<n;i++) {
		int x=0,y=i;
		int s=0;
		while(x>=0 and x<n and y>=0 and y<n) {
			s+=v[x][y];
			x++,y++;
		}
		hash[{-1*x+y,-1}]=s;
	}
	for(int i=1;i<n;i++) {
		int x=i,y=0;
		int s=0;
		while(x>=0 and x<n and y>=0 and y<n) {
			s+=v[x][y];
			x++,y++;
		}
		hash[{-1*x+y,-1}]=s;
	}
	for(int i=0;i<n;i++) {
		int x=n-1,y=i;
		int s=0;
		while(x>=0 and x<n and y>=0 and y<n) {
			s+=v[x][y];
			x--,y++;
		}
		hash[{1*x+y,1}]=s;
	}
	for(int i=n-2;i>=0;i--) {
		int x=i,y=0;
		int s=0;
		while(x>=0 and x<n and y>=0 and y<n) {
			s+=v[x][y];
			x--,y++;
		}
		hash[{1*x+y,1}]=s;
	}
//	while(1) {
//		int i,j;
//		cin>>i>>j;
//		cout<<hash[{i+j,1}]+hash[{-i+j,-1}]-v[i][j]<<endl;
//	}
	int x1,x2,y1,y2;
	int m1=-1;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			int total=hash[{i+j,1}]+hash[{-i+j,-1}]-v[i][j];
			if(total>m1) {
				x1=i,y1=j;
				m1=total;
			}
		}
	}
	int m2=-1;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			int total=hash[{i+j,1}]+hash[{-i+j,-1}]-v[i][j];
			if(total>m2 and (i+j)%2!=(x1+y1)%2) {
				x2=i,y2=j;
				m2=total;
			}
		}
	}
	//cout<<m1<<endl;
	//cout<<m2<<endl;
	x1++,x2++,y1++,y2++;
	cout<<m1+m2<<endl;
	cout<<x1<<gap<<y1<<gap<<x2<<gap<<y2<<endl;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
