#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	bool flag=false;
	for(int i=1;i<n;i++) {
		if(a[i-1]>a[i]) flag=true;
	}
	if(flag==false) { cout<<n<<endl; return 0; }
	int l=0,r=0,L=0,R=0;
	for(int i=1;i<n/2;i++) if(a[i-1]>a[i]) { L=max(L,l); l=0; } else l++;
	for(int i=n/2+1;i<n;i++) if(a[i-1]>a[i]) { R=max(R,r); r=0; } else r++;
	int k=0,u=max(L,R);
	//while(u>=2) k++,u/=2;
	cout<<u<<endl;
}
