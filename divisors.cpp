#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,c=1;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		set<int> s;
		cout<<"Case "<<c<<":"<<" "<<1;
		for(int i=2;i<=(int)sqrt(n);i++)
			{
				if(n%i==0)
				{
					s.insert(i);
					s.insert(n/i);
				}
			}
		 for (auto it=s.begin(); it != s.end(); ++it) 
				cout <<" "<< *it; 
		cout<<" "<<n<<endl;
	}
	return 0;
}
