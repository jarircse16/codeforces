#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,n,f=0,t;
    cin>>a>>b>>n;
    for(int i=0;i<10;i++)
    {
        if((a*10+i)%b==0)
        {
            t=a*10+i;
            f=1;
            break;
        }
    }
    if(f==1)
        {
        cout<<t;;
        for(int i=0;i<n-1;i++)
            cout<<"0";
        }

    else
        cout<<"-1";
    return 0;
}
