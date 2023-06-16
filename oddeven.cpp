#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int T,i;
	cin>>T;
	string n;
	while(T--)
	{
		cin>>n;
		int x=n.size()-1;
		if(n[x]=='1' or n[x]=='3' or n[x]=='5' or n[x]=='7' or n[x]=='9')
			cout<<"odd\n";
		else
			cout<<"even\n";			
	}
		return 0;
	
}
