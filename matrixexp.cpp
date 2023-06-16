#include<bits/stdc++.h>
using namespace std;
int N,M,x,Q;
int s,t;
int d1[100005],d2[100005];

void SPFA(int source,int dest,vector<pair<int,int>> *adj,int type) {
	int *distance;
	if(type==1) distance=&d1[0]; else distance=&d2[0];
	for(int i=1;i<=N;i++) distance[i]=(1<<30);
	distance[source]=0;
	queue<int> Q;
	Q.push(source);
	bool in[N+1];
	memset(in,0,sizeof(in));
	while(!Q.empty()) {
		int u=Q.front();
		Q.pop();
		for(auto v:adj[u]) {
			if(distance[u]+v.second<distance[v.first]) {
				distance[v.first]=distance[u]+v.second;
				if(!in[v.first])
					Q.push(v.first);
			}
		}
	}
}
int main() {
	int T;
	cin>>T;
	int c=1;
	while(T--) {
		cout<<"Case "<<c++<<":\n";
		cin>>N>>M>>x>>Q;
		vector<pair<int,int>> adj[N+1],rev[N+1];
		while(M--) {
			int u,v,w;
			cin>>u>>v>>w;
			adj[u].push_back({v,w});
			rev[v].push_back({u,w});
		}
		SPFA(x,t,adj,1);
		SPFA(x,s,rev,2);
		while(Q--) {
			cin>>s>>t;
			if(d1[t]==(1<<30)) {
				cout<<"Be seeing ya, John\n"; continue;
			}
			if(d2[s]==(1<<30)) {
				cout<<"Be seeing ya, John\n"; continue;
			}
			cout<<d1[t]+d2[s]<<endl;
		}
	}
}
