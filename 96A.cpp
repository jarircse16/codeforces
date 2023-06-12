#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s,s1="0000000",s2="1111111";
    cin>>s;
    if(s.find(s1)!=string::npos || s.find(s2)!=string::npos)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


