#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
//incomplete//
int countSpaces(char input[])
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

int main()
{
	   
	int T;
	cin>>T;
	
	while(T--)
	{
		 char s[100] = "\0";
		 cin.getline(s, 100);
		 int x = countSpaces(s);
		 cout<<x<<endl;
		 
	 }	   
  
}
