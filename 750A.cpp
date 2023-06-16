#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;

    int rem = 240-k, p=0, s=0;


        for(int i=1;i<=n;i++)
        {
            s+=5*i;
            if(s>rem)
                break;
            p++;

        }
    cout<<p<<endl;

    return 0;
}


