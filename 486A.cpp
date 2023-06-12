#include<bits/stdc++.h>
using namespace std;
#define int long long

/*int f(int n)
{
    int s=0,i;
    for(i=0;i<n+1;i++)
    {
        if(i%2==0)
            s+=i;
        else
            s-=i;
    }
    cout<<s<<endl;
}
*/

long long f(long long n)
{
    if(n%2==0)
        return n/2;
    else
        return -((n+1)/2);

}

int32_t main()
{
    long long n;
    cin>>n;
    cout<<f(n)<<endl;
    return 0;
}
