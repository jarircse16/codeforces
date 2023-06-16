#include<bits/stdc++.h>
using namespace std;

int p(int a,int n) {
	if(n==0) return 1;
	if(n%2==1) return a*p(a,n-1);
	int x=p(a,n/2);
	return x*x;
}
int call=0;
int f(int a,int n) {
	call++;
	if(n==0) return 1;
	if(n%2==0) return 1+a*f(a,n-1);
	return f(a,n/2)*(1+p(a,n/2+1));
}
int main() {
	while(1) {
		int a,n;
		cin>>a>>n;
		call=0;
		cout<<f(a,n)<<endl;
		cout<<call<<endl;
	}
}
