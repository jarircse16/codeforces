#include<bits/stdc++.h>
#include<string>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{

    int n,p,q,c=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if(q-p>1)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
