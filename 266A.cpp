#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,i,total=0;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
        if(s[i]==s[i+1])
            total++;
    cout<<total<<endl;
    return 0;
}

