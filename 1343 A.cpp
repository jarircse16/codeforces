#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,x;
        cin>>n;
        for(int i=2;i<30;i++)
        {
            p=pow(2,i)-1;
            if(n%p==0)
            {
                x=n/p;
                break;
            }
        }
        cout<<x<<endl;
    }
}
