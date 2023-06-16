#include<bits/stdc++.h>
using namespace std;

string n="100";
int M=1;
int d=3;
int f(int pos,int pos2,int mod,int smaller,int started,int used) {
	if(mod==0 and pos==n.size()) { cout<<endl; return (started and used); }
	if(pos==n.size()) {
		return 0;
	}	
	int m=n[pos]-'0';
	if(smaller) m=9;
	int a=0;
	
	if(pos2%2==1) { if(d<=m)a+=f(pos+1,pos2+1,(mod*10+d)%M,d<n[pos]-'0',started or d!=0,1); }
	else
	for(int i=0;i<=m;i++) {
		if(i!=d) a+=f(pos+1,pos2+1-(i==0 and started==0),(mod*10+i)%M,i<n[pos]-'0',started or i!=0,0);
	}
	return a;
}
int main() {
	cout<<f(0,0,0,false,0,0);
}
