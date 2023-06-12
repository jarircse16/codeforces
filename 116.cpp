#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,si=0,se=0,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        si+=a;
        se+=b;
    }
    cout<<si-se<<endl;
    return 0;
}
