#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int x,rslt=0;
    cin>>x;
    if(x%5!=0)
        rslt+=floor(x/5)+1;
    else
        rslt+=x/5;
    cout<<rslt<<endl;
    return 0;
}
