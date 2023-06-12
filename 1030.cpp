#include<bits\stdc++.h>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x+=a[i];
}
if(x==0)
    cout<<"EASY"<<endl;
else
    cout<<"HARD"<<endl;

    return 0;
}
