#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int x=s.size();
    int uc=0,lc=0;
    for(int i=0;i<x;i++)
    {
        if(isupper(s[i]))
            uc++;
        else
            lc++;
    }
    if(uc>lc)
        for(int i=0;i<x;i++)
            s[i]=toupper(s[i]);
    else
        for(int i=0;i<x;i++)
            s[i]=tolower(s[i]);

    cout<<s;
    return 0;
}
