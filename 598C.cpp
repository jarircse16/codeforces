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
const double pi=acos(-1.0);
#define double long double
double angle(double x,double y) {
	if(y==0) return 0;
	if(x==0) return 90.0;
	return atan(y/x)*180.0/pi;
}
void solve() {
	int n;
	cin>>n;
	vector<pair<double,int>> a(n);
	vector<pair<double,int>> b(n);
	for(int i=0;i<n;i++) {
		double x,y;
		cin>>x>>y;
		if(x>=0 and y>=0) a[i]={angle(x,y),i};
		else if(x<=0 and y>=0) a[i]={180.0-angle(-x,y),i};
		else if(x<=0 and y<=0) a[i]={180.0+angle(-x,-y),i};
		else if(x>=0 and y<=0) a[i]={2.0*180.0-angle(x,-y),i};
		swap(x,y);
		x*=1.0;
		if(x>=0 and y>=0) b[i]={angle(x,y),i};
		else if(x<=0 and y>=0) b[i]={180.0-angle(-x,y),i};
		else if(x<=0 and y<=0) b[i]={180.0+angle(-x,-y),i};
		else if(x>=0 and y<=0) b[i]={2.0*180.0-angle(x,-y),i};				
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	//for(auto x:a) cout<<x.first<<gap;
	//for(auto x:b) cout<<x.first<<gap;
	
	double m=21313123.0;
	int aa=-1,bb=-1;

	for(int i=0;i<n-1;i++) {
		if(b[i+1].first-b[i].first<m) {
			m=b[i+1].first-b[i].first;
			aa=b[i+1].second;
			bb=b[i].second;
		}
	}

	for(int i=0;i<n-1;i++) {
		if(a[i+1].first-a[i].first<m) {
			m=a[i+1].first-a[i].first;
			aa=a[i+1].second;
			bb=a[i].second;
		}
	}
	cout<<min(aa,bb)+1<<gap<<max(aa,bb)+1;
}
int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
