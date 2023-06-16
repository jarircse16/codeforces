#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
/*
bool isprime(int n)
{
	if(n==2)
		return true;
	else if(n%2==0)
		return false;
	else
		for(int i=3;i<=(int)sqrt(n);i+=2)
			if(n%i==0) return false;
	
	return true;
}*/
bitset<7368787+5> isprime;
void sieve() {
	for(int i=1;i<=7368787;i+=2) isprime[i]=1;
	isprime[2]=1;
	for(int i=3;i<=sqrt(7368787);i+=2) {
		for(int j=i*i;j<=7368787;j+=i)
			isprime[j]=0;
	}
}
int32_t main() {
	
}
