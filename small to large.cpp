#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; 
	cin>>T;
	int c=1;
	while(T--)
	{
	int a[3];
	for(int i=0;i<3;i++)
		cin>>a[i];
	sort(a,a+3);
		cout<<"Case "<<c<<":";
	for(int i=0;i<3;i++)
		cout<<" "<<a[i];
		cout<<endl;
	}			
	return 0;
}
