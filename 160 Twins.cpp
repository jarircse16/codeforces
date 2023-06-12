#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,s=0,taken=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    int i=0;
    sort(a,a+n,greater<int>());
    while(taken<=s)
    {
        taken+=a[i];
        s=s-a[i];
        i++;
    }
    cout<<i;

}
