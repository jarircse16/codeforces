#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a%b!=0){
            int r=((int)(a/b))*b+b-a;
            cout<<r<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

