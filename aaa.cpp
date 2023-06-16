#include<bits/stdc++.h>
using namespace std;
long long d[101];
int cost[101][101];
int N,m;

void dijkstra(vector<int> *adj) {
	d[1]=0;
	for(int i=2;i<=N;i++) d[i]=1e9;
	bool vis[N+1];
	for(int i=1;i<=N;i++) vis[i]=false;
	priority_queue<pair<int,int>> Q;
	Q.push({0,1});
	while(Q.size()) {
		int u=Q.top().second;
		Q.pop();
		if(vis[u]) continue;
		vis[u]=true;
		for(int v:adj[u]) {
			if(d[u]+cost[u][v]<d[v])
			{
				d[v]=d[u]+cost[u][v];
				Q.push({-d[v],v});
			}
		}
	}
}
int main() {
	int T;
	cin>>T;
	for(int t=1;t<=T;t++) {
		cin>>N>>m;
		vector<int> adj[N+1];
		for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
		cost[i][j]=1e9;
		
		for(int i=0;i<m;i++) {
			int x,y,z;
			cin>>x>>y>>z;
			if(z<cost[x][y] and z<cost[y][x])
			{
				adj[x].push_back(y);
				adj[y].push_back(x);
				cost[x][y]=z;
				cost[y][x]=z;
			}
		}
		dijkstra(adj);
		printf("Case %d: ",t);
		if(d[N]>=1e9) cout<<"Impossible\n";
		else cout<<d[N]<<endl;
	}
}
