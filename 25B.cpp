#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
	
	int y=n%2+2;
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
		if(i%2==1 and i<n-y)
		cout<<"-";
	}
	return 0;
}
