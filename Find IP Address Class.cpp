#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    s.push_back('.');
    int tmp=0;
    vector<int> ip;
    for(int i=0;i<s.size();i++) {
        if(s[i]=='.') {
            ip.push_back(tmp);
            tmp=0;
        }
        else {
            int d=s[i]-'0';
            tmp=tmp*10+d;
        }
    }
        map<pair<int,int>,char> m;
        m[{0,127}]='A';
        m[{128,191}]='B';
        m[{192,223}]='C';
        m[{224,239}]='D';
        m[{240,255}]='E';
        for(auto p:m) {
            if(p.first.first<=ip[0] and ip[0]<=p.first.second)
                cout<<"Class: "<<p.second<<endl;
    }
}
