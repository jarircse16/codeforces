#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,x=s.size(),f=0;
    for(i=0;i<x;i++)
    {
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
