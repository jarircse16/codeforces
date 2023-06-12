#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define ll long long
#define ld long double
#define gap ' '
#define endl '\n'


void solve() {
    int n;
    cin>>n;
    vector<int> p(n+1);
    map<int,int> m; // m[i] = who gave gift to p[i] -> i
    for(int i=1;i<=n;i++) {
        cin>>p[i];
        m[p[i]]=i; // i gave gift to p[i]
    }
    for(int i=1;i<=n;i++)
    cout<<m[i]<<gap;
    cout<<endl;
}
void solve(bool testcase) {
    int t;
    cin>>t;
    while(t--)
    solve();
}
int32_t main() {
    fio
    solve();
    return 0;
}
