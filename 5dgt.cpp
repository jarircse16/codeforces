#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		cout<<"Sum = "<<(int)(n%10+n/10000)<<endl;
	}
	return 0;
}
