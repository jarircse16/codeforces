#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m;
		cin>>n>>m;
		int a[n+1],A[n+1];
		for(int i=1;i<=n;i++) { cin>>a[i]; A[i]=a[i]; }
		int M[105];
		memset(M,0,sizeof(M));
		for(int i=0;i<m;i++) { int x;
		cin>>x; M[x]++;}
		vector<int> P;

		for(int i=1;i<=n;i++) {
			if(M[i]==0) P.push_back(i);
		}
		sort(A+1,A+n+1);
		bool flag=false;
		for(int i=0;i<P.size();i++) {
			if(A[P[i]]!=a[P[i]] || A[P[i]+1]!=a[P[i]+1]) 
			flag=true;
		}
		if(flag) cout<<"NO\n"; else cout<<"YES\n";
	}
}
