#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,x=s.size(),lc=0;
    for(i=0;i<x;i++)
    {
        if(s[i]=='4' or s[i]=='7')
            lc++;
    }
    if(lc==4 or lc==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}



