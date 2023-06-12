#include<bits\stdc++.h>
using namespace std;


int main()
{
    long long t,a,b,g,x;
    cin>>t;
    p:while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            goto p;
        }
        else
        {
        g= abs(a-b);
        x= min(a%g,g-a%g);
        cout<<g<<" "<<x<<endl;
        }
    }
    return 0;
}
