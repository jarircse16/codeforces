#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		int sq=(int)sqrt(n);
		if(sq*sq==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
