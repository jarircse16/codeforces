 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
	string s1,s2;
	cin>>s1>>s2;
	int n=s1.size();
	bitset<105> bs1(s1),bs2(s2),bs3;
	bs3=bs1+bs2;
	cout<<bs3;
	 return 0;
	 
 }