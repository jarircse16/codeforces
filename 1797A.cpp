#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if((x1==1 && y1>1) || (x1>1 && y1==1) || (x2==1 && y2>1) || (x2>1 && y2==1))
            cout<<3<<endl;
        if( (x1==1 && y1==1) || (x2==1 && y2==1) || (x1==1 && y1==n) || (x2==1 && y2==n) || (x1==n && y1==1) || (x2==n && y2==1) || (x1==n && y1==m) || (x2==n && y2==m))
            cout<<2<<endl;
       // if((x1==x2 && abs(y1-y2)==1) || (abs(x1-x2)==1 && y1==y2))
       //     cout<<1<<endl;
        if(x1>1 && x2>1 && y1>1 && y2>1 && (abs(x1-x2)+abs(y1-y2))==2)
            cout<<4<<endl;
        if ((abs(x1-x2)==1 && abs(y1-y2)==0)|| (abs(y1-y2)==1 && abs(x1-x2)==0))
            cout<<0<<endl;

    }
	return 0;
}
