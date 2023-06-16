#include<bits/stdc++.h>
using namespace std;
#define int long long
string now="19";
int dp[30][11][2];
int f(int pos,int s,int bigger) {
	if(s==0) if(bigger) return 0; else return 9999999;
	if(pos>=now.size()+1) return 9999999;
	if(dp[pos][s][bigger]!=-1) {
		return dp[pos][s][bigger];
	}	
	int A=(1<<30);
	for(int i=2;i<=9;i++) {
		if(pos==0 and i==0) continue;
		if(i!=2 and i!=8) continue;
		if(pos>=now.size()) 
		{
			int a=f(pos+1,s-i,1)*10+i;
			cout<<a<<endl;
			A=min(a,A);
		}
		else 
		{
			int a=f(pos+1,s-i,i>now[pos]-'0')*10+i;
			cout<<a<<endl;
			A=min(a,A);
		}
	}
	return dp[pos][s][bigger]=A;
}
int32_t main() {
	memset(dp,-1,sizeof(dp));
	cout<<f(0,10,0);
	int pos=0,s=10,bigger=0;
	
}
