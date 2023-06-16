#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fio cin.tie(NULL);ios_base::sync_with_stdio(0);
int main() {
	//fio
	int t;
	cin>>t;
	while(t--) {
		ll n,k;
		cin>>n>>k;
		if(k==1) {
			for(int i=0;i<n-2;i++) cout<<"a";
			cout<<"bb"<<endl;
			continue;
		}
		if(k==n*(n-1)/2) {
			cout<<"bb";
			for(int i=0;i<n-2;i++) cout<<"a";
			cout<<endl;
			continue;
		}
		ll N=(-1.0+sqrtl(1LL+8LL*k))/2;
		ll a=N+2;
		ll b=k-N*(N+1)/2;
		string A="";
		for(int i=n;i>=1;i--) if(i==a or i==b) A+="b"; else A+="a";
		cout<<A<<endl;
	}
	return 0;
}
