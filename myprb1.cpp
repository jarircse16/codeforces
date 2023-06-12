#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100];
int dp[100][100000];
int n,x;
int f(int i,int m) {
    if(i==n) {
        if(m>x) return m;
        return 1e9;
    }
    if(dp[i][m]!=-1) return dp[i][m];
    int w1=f(i+1,m);
    int w2=1e9;
    if(m<=x)
    w2=f(i+1,m*a[i]);
    return dp[i][m]=min(w1,w2);
}
void print(int i,int m) {
    if(i==n) return;
    int w1=f(i+1,m);
    int w2=f(i+1,m*a[i]);
    if(w1<=w2) print(i+1,m);
    else {
        cout<<a[i]<<' ';
        print(i+1,m*a[i]);
    }
}
void print2(int i,int m) {
    if(i==n) return;
    int w1=f(i+1,m);
    int w2=f(i+1,m*a[i]);
    if(w1<w2) print(i+1,m);
    else {
        cout<<a[i]<<' ';
        print(i+1,m*a[i]);
    }
}
int32_t main() {
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    x=*max_element(a,a+n);
    cout<<f(0,1)<<endl;
    print(0,1);
    cout<<endl;
    print(0,1);
}
