#include<bits/stdc++.h>
using namespace std;

int main() {
	string x;
	vector<int> v;
	int t=1;
	char b=x[0];
	for(int i=1;i<x.size();i++) {
		if(x[i]==b) t++;
		else  {
			v.push_back(t);
			t=1;
			b=x[i];
		}
	}
	for(int a:v) cout<<a;
}
