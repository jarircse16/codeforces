#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int n,i,ac=0,dc=0;
    cin>>n;
    char s[n];
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            ac++;
        else if(s[i]=='D')
            dc++;
    }
    if(ac>dc)
        cout<<"Anton"<<endl;
    else if(ac<dc)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}
