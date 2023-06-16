#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
	int r=0;
	while(n) r+=n%10,n/=10;
	return r;
}
int main() {
	int k,c=1;
	int now=19;
	cin>>k;
	while(c<k) {
		now+=9;
		while(sum(now)!=10) now+=9;
		c++;
	}
	cout<<now;
	return 0;
}
