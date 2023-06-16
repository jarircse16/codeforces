#include<bits/stdc++.h>
using namespace std;
int id_to_island[55*55];
int id_to_index[55*55];
int islands[55][55][55];
int kingdom[55][55];

int main() {
	int T;
	cin>>T;
	for(int t=1;t<=T;t++) {
		printf("Case #%d:\n",t);
		int N;
		cin>>N;
		for(int i=0;i<N;i++) {
			int S;
			cin>>S;
			for(int j=0;j<S;j++) {
				int x;
				cin>>x;
				id_to_index[x]=j;
				id_to_island[x]=i;
			}
			for(int j=0;j<S;j++)
			for(int k=0;k<S;k++)
				cin>>islands[i][j][k];
			for(int k=0;k<S;k++)
			for(int u=0;u<S;u++)
			for(int v=0;v<S;v++)
			islands[i][u][v]=min(islands[i][u][v],islands[i][u][k]+islands[i][k][v]);
		}
		for(int i=0;i<N;i++) 
		for(int j=0;j<N;j++) 
		cin>>kingdom[i][j];
		for(int k=0;k<N;k++) 
		for(int i=0;i<N;i++) 
		for(int j=0;j<N;j++) 
		kingdom[i][j]=min(kingdom[i][j],kingdom[i][k]+kingdom[k][j]);
		int q;
		cin>>q;
		while(q--) {
			int u,v;
			cin>>u>>v;
			int u1=id_to_index[u],v1=id_to_index[v];
			int u2=id_to_island[u],v2=id_to_island[v];
			int cost=0;
			if(u2!=v2) cost=kingdom[u2][v2];
			else cost=islands[u2][u1][v1];
			cout<<cost<<endl;
		}
	}
}
