#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t,m,n,s=0,oddc=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int s=0;
        m=n*2;
        int a[m];

        for(int i=0;i<m;i++)

        {
            cin>>a[i];
            s+=a[i];
            if(a[i]%2==1)
                oddc++;

        }

        if(n==1)

        {
            if(s%2==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

        else

        {
            if(oddc==n)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
}
}
