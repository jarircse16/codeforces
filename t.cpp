#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<double> x1,x2,v1,v2;
double distance(double t) {
	double d=0.0;
	for(int i=0;i<x1.size();i++)
	{
		double v=(x1[i]+v1[i]*t)-(x2[i]+v2[i]*t);
		d+=v*v;
	}
	return d;
}
int32_t main() {
	int t;
	cin>>t;
	while(t--) {
		int n,r1,r2;
		cin>>n>>r1>>r2;
		if(r1==r2) {
			cout<<-1<<endl;continue;
		}
		for(int i=0;i<n;i++) {
			double j;
			cin>>j;
			x1.push_back(j);
		}
		for(int i=0;i<n;i++) {
			double j;
			cin>>j;
			x2.push_back(j);
		}
		for(int i=0;i<n;i++) {
			double j;
			cin>>j;
			v1.push_back(j);
		}
		for(int i=0;i<n;i++) {
			double j;
			cin>>j;
			v2.push_back(j);
		}
		double lo=0.0,hi=100000.0,m;
		int loop=200;
		double slope;
		while(loop--) {
			m=(lo+hi)/2.0;
			slope=distance(m+0.00000001)-distance(m);
			cout<<slope<<endl;
			if(slope<0) lo=m;
			else if(slope>0) hi=m;
		}
		cout<<'!'<<endl;
		cout<<distance(9.92928932+0.00001)-distance(9.92928932)<<endl;
		cout<<slope<<endl;
		cout<<fixed<<setprecision(10)<<m<<endl;			
	}
}
