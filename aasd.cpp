#include<bits/stdc++.h>
using namespace std;

int main() {
	int c=0;
	map<int,int> m;
	for(int i=0;i<=5;i++) 
	for(int j=0;j<=9;j++) if(i!=j)
	for(int k=0;k<=9;k++) if(j!=k)
	for(int l=0;l<=9;l++) if(k!=l)
	if(l%5==0) m[i*1000+j*100+k*10+l]++;
	cout<<m.size();
}
