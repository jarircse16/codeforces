#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,i;
    cin>>N;
    pair<int ,int> houses[N];
    for(i=0;i<N;i++)
    {
        cin>>houses[i].first>>houses[i].second;
    }
    map<pair<int,int>,int> M;
    for(int i=0;i<N;i++) {
        for(int x=0;x<=10;x++) {
            for(int y=0;y<=10;y++) {
                int X=houses[i].first,Y=houses[i].second;
                if((X+x)%10==0 && (Y+y)%10==0 && x+y<=10)
                    M[{X+x,Y+y}]++;
                if((X-x)%10==0 && (Y+y)%10==0 && x+y<=10)
                    M[{X-x,Y+y}]++;
                if((X+x)%10==0 && (Y-y)%10==0 && x+y<=10)
                    M[{X+x,Y-y}]++;
                if((X-x)%10==0 && (Y-y)%10==0 && x+y<=10)
                    M[{X-x,Y-y}]++;
            }
        }
    }
    pair<int,int> ma;
    int maax=-1;
    for(pair<pair<int,int>,int> p:M) {
        if(p.second>maax) {
            maax=p.second;
            ma.first=p.first.first;
            ma.second=p.first.second;
        }
    }
    cout<<ma.first<<" "<<ma.second;
    return 0;
}

