#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)cin>>a[i];
		int c=0,l1,l2;
		for(int i=1;i<=n;i++) {
			s.insert(a[i]);
			c++;
			if(c!=s.size()) {
				c--;
				l1=i-1;
				break;
			}
		}
		for(int i=l1+1;i<=n;i++)
	}
	return 0;	
}
