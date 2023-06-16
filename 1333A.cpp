#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		bool flag=false;
		vector<int> a(n),b(n);
		for(int &x:a) cin>>x;
		for(int &x:b) cin>>x;
		bool pos=false,neg=false;
		for(int i=0;i<n;i++) {
			if((b[i]>a[i] and pos==false) or (b[i]<a[i] and neg==false))
			{
				flag=true;
				break;
			}
			if(a[i]>0) pos=true;
			if(a[i]<0) neg=true;
		}
		if(flag) cout<<"NO\n"; else cout<<"YES\n";
	}
}
