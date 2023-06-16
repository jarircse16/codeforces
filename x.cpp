#include<bits/stdc++.h>
using namespace std;
int N,Z;
vector<pair<int,int> > adj[1000005];
int trucks[1000005];
void dfs(int node,int add) {
    trucks[node]+=add;
    if(node==Z) return;
    for(pair<int,int> v:adj[node]) {
        dfs(v.first,min(trucks[node],v.second));
        v.second-=min(trucks[node],v.second);
    }
}
int main() {
    cin>>N>>Z;
    for(int i=0;i<N-1;i++) {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=1;i<=N;i++) cin>>trucks[i];
    for(int i=1;i<=N;i++) if(adj[i].size()==1) dfs(i,0);
    cout<<trucks[Z];
}

