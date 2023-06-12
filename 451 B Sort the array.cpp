#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d1,d2,c=0;
    cin>>n;
    int a[n],b[n];
    for(auto i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    int start=0;
    bool started=true;
    int i;
    for(i=1;i<n;i++)
    {
        if(b[i-1]>b[i]) {
            if(started==false)
            start=i-1,started=true;
        }
        if(b[i-1]<b[i]) {
            if(started) cout<<start<<" "<<i-1<<endl;
            started=false;
        }
    }
    if(started) cout<<start<<" "<<i-1<<endl;




}
