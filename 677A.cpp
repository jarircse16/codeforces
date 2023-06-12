#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int i,n,h;
    cin>>n>>h;
    int a[n],w=n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]>h)
            w++;
    cout<<w<<endl;
    return 0;
}
