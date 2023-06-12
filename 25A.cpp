#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1],i;
    vector<int> odd, even;
    for(i=1;i<n+1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even.push_back(i);
        else
            odd.push_back(i);
    }
    if(even.size()==1){
        for (auto it = even.begin(); it != even.end(); ++it)
        cout <<*it<<endl;
        }
    else
    {
         for (auto it = odd.begin(); it != odd.end(); ++it)
        cout <<*it<<endl;
    }

    return 0;
}


