#include<bits/stdc++.h>
using namespace std;

int lognpower(int a,int n)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result*=a;
		}
		a*=a;
		n/=2;
	}
	return result;
}

int main()
{
	cout<<lognpower(2,9);
}
