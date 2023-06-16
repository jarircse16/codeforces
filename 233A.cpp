#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%2==1) {
		cout<<-1;
		return 0;
	}
	n/=2;
	int x=2;
	while(n--) {
		cout<<x<<' '<<x-1<<' ';
		x+=2;
	}
	return 0;
}
