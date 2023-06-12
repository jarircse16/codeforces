#include <bits/stdc++.h>
using namespace std;

int a[10000];

int main()
{
    int n,i,cnt=1,high_pill=1,pill=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1; i<n; i++)
    {
        if(a[i]!=a[i-1])
        {
            cnt++;
            pill=1;
        }
        if(a[i]==a[i-1])
        {
            pill++;
            if(pill>high_pill)
            {
                high_pill=pill;
            }
        }
    }
    cout<<high_pill<<" "<<cnt<<endl;
    return 0;
}




