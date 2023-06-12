#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,luck=0,lucky[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>n;
    for(i=0;i<14;i++)
    {
        if(n%lucky[i]==0)
        {
            luck=1;
            break;
        }
    }
    if(luck==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
