#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <iostream>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long x,k,a,b,t1,t2,c2,c=0;
cin>>x>>k>>a>>b;
while(x!=1)
{
if(k>x) {
	c+=(x-1)*a;
	break;
}
else
if(x%k==0)
{
t1=x/k;
t2=x-t1; c2=t2*a;
if(b<c2) { x=t1; c+=b; } else 
{ x=t1; c+=c2; }
}
else { x--; c+=a; }
}
cout<<c;
 
	return 0;
}
