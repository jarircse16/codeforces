
#include<bits/stdc++.h>

using namespace std;

#define int long long
int32_t main() {cout<<(4016016%2004)<<endl;return 0;int s=0;for(int i=1;i<=1000;i++) {int x=i;int y=0,p=0;while(x) {int now=x%10;if(now<=4) now++; else now--;x/=10;y+=now*(int)pow(10,p++);}cout<<y<<endl;s+=y;}}