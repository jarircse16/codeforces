#include<bits/stdc++.h>
using namespace std;

int power(int n,int p)
{
	if(p==0)
		return 1;
	else if(p%2==0)
		 {
		 	int x=pow(n,p/2);
		 	return x*x;
		 }
	else
		return n*pow(n,p-1);
		
}

int main()
{
	int n,p;
	cin>>n>>p;
	cout<<power(n,p);
	return power(n,p);
	
}
