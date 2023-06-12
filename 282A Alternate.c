#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,total=0,string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s.find('+')<s.length())
            total++;
        if(s.find('-')<s.length())
            total--;
    }
    cout<<total<<endl;
}


