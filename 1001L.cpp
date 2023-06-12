#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a;
		cin>>a;
		if(a<=10)
            cout<<0<<" "<<a<<endl;
		else
            cout<<10<<" "<<a-10<<endl;
	}
		return 0;
}
