#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,advance=0;
    cin>>n>>k;
    k=k-1;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        if(a[i]>=a[k] && a[i]>0)
            advance++;
    cout<<advance<<endl;
    return 0;
}
