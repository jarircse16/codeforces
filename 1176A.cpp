#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    long long q;
    cin>>q;

    while(q--)
    {
        long long n,c=0;
        cin>>n;
        while(n%2==0)
        {
            n=n/2;
            c++; //Only dividing by 2
        }
        while(n%3==0)
        {
            n=n/3;
            c+=2; //Dividing by 3 but multiplying by 2,so another division operation occurs divide by 2 one time so +2
        }
        while(n%5==0)
        {
            n=n/5;
            c+=3; //Dividing by 5 but multiplying by 4,so two more division operation occurs divide by 2 two times so +3
        }
        if(n==1) cout<<c<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
