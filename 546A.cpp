#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    int k,n,w;
    cin>>k>>n>>w;
    int cost=((k*w*(w+1))/2);
    if(cost<n){
        cout<<0<<endl;
    }
    else{
    int result= cost-n;
    cout<<result<<endl;
    }
    return 0;
}




