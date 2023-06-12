#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,exit,enter,texit,tenter,tmp=0;
    vector<int>temp;
    cin>>n;
    while(n--)
    {
        cin>>exit>>enter;
        tmp+=enter-exit;
        temp.push_back(tmp);
    }
    sort(temp.begin(),temp.end());
    cout<<temp[temp.size()-1]<<endl;
    return 0;
}
