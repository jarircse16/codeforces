#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int a,b, years=0;
    cin>>a>>b;
    while(1)
    {
        if(a>b)
            break;
        else
        {
            a=a*3;
            b=b*2;
            years++;
        }
    }
    cout<<years<<endl;
    return 0;
}






