#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    reverse(s2.begin(),s2.end());
    int res=s1.string::compare(s2);
    if(res==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


