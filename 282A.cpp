#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,total=0;
    string s1="x++",s2="x--";
    cin>>n;
    string inputs[n];
    for(int i=0;i<n;i++)
        cin>>inputs[i];
    for(int i=0;i<n;i++)
        if(strcmp(inputs[i],s1)==0)
            total++;
        else if(strcmp(inputs[i],s2)==0)
            total--;
    cout<<total<<endl;
    return 0;
}


