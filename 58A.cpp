#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int i,ni,xi,x=s.size(),found=0;
    for(i=0;i<x;i++)
    {
        if(s[i]=='h' and found==0) found++;
        else if(s[i]=='e' and found==1) found++;
        else if(s[i]=='l' and found==2) found++;
        else if(s[i]=='l' and found==3) found++;
        else if(s[i]=='o' and found==4) found++;

        if(found==5) break;
    }

    if(found==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
