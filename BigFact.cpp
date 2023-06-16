#include<bits/stdc++.h>
using namespace std;

int zerocount(int n)
{
	int count=0,x;
	
			while(n>=2)
			{
				x=n;
			a:if(x%5==0)
				{
					count++;
					x=x/5;
					goto a;
				}
				else
				{
					n--;
				}
			}
		return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<zerocount(n);
	return 0;
	
}
