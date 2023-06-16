#include<bits/stdc++.h>
using namespace std;

int f(int a,int b) {
	return a*b;
}
int main() {
	vector<int> v={1,2,3,4,5,6,7,8,9,10};
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	cout<<accumulate(v.begin(),v.end(),1,f)<<endl;
	cout<<adjacent_difference()
}
