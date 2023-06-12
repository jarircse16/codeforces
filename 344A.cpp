#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mc=1;
    cin>>n;
    string s,s1="10",s2="01";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s.string::compare(s1))
            a[i]=1;
        else
            a[i]=0;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
            mc++;
        }
    cout<<mc<<endl;
    return 0;

    }
