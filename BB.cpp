#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		vector<int> a(n);
		for(int &x:a) cin>>x;
		int p[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
		for(int i=0;i<n;i++)
		for(int j=0;j<11;j++)
		if(a[i]%p[j]==0) {
			a[i]=p[j]; break;
		}
		pair<int,int> A[n];
		vector<pair<int,int>> C;
		for(int i=0;i<n;i++) A[i].first=p[i],A[i].second=i;
		sort(A,A+n);
		int c=1;
		for(int i=1;i<n;i++) {
			if(A[i-1].first==A[i].first) 
			C.push_back({A[i-1].second,c}),C.push_back({A[i].second,c});
			else
			c++;
		} 
		if(A[n-1].first!=A[n-2].first) C.push_back({A[n-1].second,c});
		sort(C.begin(),C.end());
		for(int i=0;i<n;i++)
		cout<<C[i].first<<" "; 
		cout<<endl;
	}
}
