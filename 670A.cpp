#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
#define gap ' '
#define endl '\n'
using namespace std;

//void solve() {
//	int n;
//	cin>>n;
//	int a=n,b=n;
//	int Min=0,Max=min(a,2LL);
//	a-=2;
//	while(a>=7) a-=7,Max+=2;
//	while(a>=6) a-=6,Max++;
//	while(b>=7) b-=7,Min+=2;
//	while(b>=6) b-=6,Min++;
//	cout<<Min<<gap<<Max<<endl;
//}
void solve() {
	int n;
	cin>>n;
	cout<<(n/7*2+(n%7>=6?1:0))<<gap;
	cout<<min(n,2+(n-2)/7*2+((n-2)%7>=6?1LL:0LL));
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
