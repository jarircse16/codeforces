#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
using namespace std;
//
//
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define ll long long
#define ld long double
#define gap ' '
#define endl '\n'

const int N=1e6;
bitset<N+5> bits;
vector<int> primes;
void sieve() {
	bits.set();
	bits[0]=bits[1]=0;
	for(int i=2;i*i<=N;i++)
		if(bits[i])
			for(int j=i*i;j<=N;j+=i)
				bits[j]=0;
	//for(int i=bits._Find_first();i<=N;i=bits._Find_next(i))
	//5primes.push_back(i);
}


void solve() {
    int d;
    cin>>d;
    int a=d+1;
    while(bits[a]==0) a++;
    int b=a+d;
    while(bits[b]==0) b++;
    cout<<a*b<<endl;
}
void solve(bool testcase) {
	int t;cin>>t;while(t--)solve();
}
int32_t main() {
	fio
	sieve();
	solve(true);
	return 0;
}
