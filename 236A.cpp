#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    set<char>ss;
    cin>>s;
    int i,n=s.size();
    for(i=0;i<n;i++)
    {
        ss.insert(s[i]);
    }
    int x=ss.size();
    if(x%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}


