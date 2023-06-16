#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,m=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==1)
            cout<<"YES"<<endl;
        else
            {
            for(i=1;i<n;i++)
            {
                if(a[i]-a[i-1]>1){
                    m=m*0;
                    break;
                }
                else
                    m=m*1;
            }
            if(m==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }

}
    return 0;
}
