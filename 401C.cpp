#include<bits/stdc++.h>
using namespace std;

int main() {
	int z,o;
	cin>>z>>o;
	if(o>=z-1 and o<=2*(z+1)) {
		if(z==o) {
			while(z) {
				cout<<"10";
				z--;
			}
		}
		else if(o==z-1) {
			while(o) {
				cout<<"01";
				o--;
			}
			cout<<0;
		}
		else {
			string a="";
			while(o>z and o and z) {
				a+="110";
				o-=2;
				z--;
			}
			while(o and z) {
				a+="10";
				o--,z--;
			}
			while(o) {
				a+="1";
				o--;
			}
			cout<<a;
		}
	}
	else cout<<-1;
	return 0;
}
