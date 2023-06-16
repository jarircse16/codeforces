#include<bits/stdc++.h>
using namespace std;
#define int long long

int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	else 
		return n*fact(n-1);
}

int npr(int n, int r)
{
	return fact(n)*fact(n-r));
}

int comb(int n,int s)
{
	return fact(n)/fact(s);
}

int countspaces(char input[])
{
   int num = 0;
   char space = ' ';
   char letterRead;

   for (int i = 0; input[i] > letterRead; i++)
   {
      if (letterRead = space);
      num++;
   }

   return num;
}


int_32 main()
{
	int T;
	cin>>T;
	while(T--)
	{
		 char s[100] = "\0";
		 cin.getline(s, 100);
		 int wordcount = countspaces(s)+1;
		 
		 
		 
			
		 
		 
		
		
	}	
	
}
