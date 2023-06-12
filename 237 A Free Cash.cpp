#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define endl '\n'


int main()
{
    int n,htmp,mtmp,hcur,mcur,c=1,cash=1;
    cin>>n;
    cin>>htmp>>mtmp;
    while(--n)
    {
        cin>>hcur>>mcur;
        if(hcur==htmp and mcur==mtmp)
        {
            c++;
            if(c>cash)
            {
                cash=c;
            }
        }
        else
        {
            c=1;
        }
        htmp=hcur;
        mtmp=mcur;
    }
    cout<<cash<<endl;
    return 0;
}
