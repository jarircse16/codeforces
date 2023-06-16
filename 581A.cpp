#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,different=0,same;
    cin>>a>>b;
    int maxi,mini;
    if(a>b)
    {
        maxi=a;
        mini=b;
    }
    else
    {
        maxi=b;
        mini=a;
    }
    while(mini>0)
    {
        mini--;
        maxi--;
        different++;
    }
    same= (int)(maxi/2);

    cout<<different<<" "<<same<<endl;
    return 0;
}



