#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,solved=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b+c==2 || a+b+c==3)
            solved++;
    }
    cout<<solved<<endl;
    return 0;
}
