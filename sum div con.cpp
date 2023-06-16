#include<bits/stdc++.h>
using namespace std;

int sumdivcon(int a, int n)
{
	int r=0;
	while(n)
	{
		if(n%2==1) r+=a;
		a=a+a;
		n=n/2;
	}
	return r;
}

int main()
{
	int a,n;
	cin>>a>>n;
	cout<<"Sum="<<sumdivcon(a,n);
}
