#include<bits/stdc++.h>
using namespace std;
#define int long long
int p[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0};
int32_t main() {
	vector<pair<int,int>> v;
	for(int i=1;i<=20;i++) {
		int c=0;
		if(i%2==0) c++;
		for(int j=3;j<=i;j+=2)
		if(i%j==0 and p[j]) c++;
		v.push_back({c,i});
	}
	sort(v.begin(),v.end());
	for(auto a:v) {
		cout<<a.second<<" - "<<a.first<<endl;
	}
}
