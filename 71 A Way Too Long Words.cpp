#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string x;
        cin>>x;
        if(x.size()>10)
        {
            int y=x.size()-2;
            cout<<x[0]<<y<<x[y+1]<<endl;
        }
        else
        {
            cout<<x<<endl;

        }
    }
    return 0;
}
