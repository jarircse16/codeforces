#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int x[n],y[n],z[n],xs=0,ys=0,zs=0;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for(i=0;i<n;i++)
    {
        xs=xs+x[i];
        ys=ys+y[i];
        zs=zs+z[i];
    }
    if(xs+ys+zs==0 and xs*ys*zs==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}



