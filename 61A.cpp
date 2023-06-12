 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
	string s1,s2;
	deque<int>s3;
	cin>>s1>>s2;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int c=0;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[i])
			s3.push_front(0);
		else
			s3.push_front(1);
	}
	for(int i=0;i<s3.size();i++)
		cout<<s3[i];
		cout<<endl;
	 return 0;
	 
 }