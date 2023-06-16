
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
	int n=1000000;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	int x=i+j+i*j+i/j;
	return 0;
}
