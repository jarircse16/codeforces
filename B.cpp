#include<bits/stdc++.h>
using namespace std;
int parent[1001];
int size[1001];
void init() {
	for(int i=0;i<=1000;i++) parent[i]=i,size[i]=1;
}
int find(int x) {
	if(parent[x]==x) return x;
	return parent[x]=find(parent[x]);
}
int connected(int u,int v) {
	return find(u)==find(v);
}
void Union(int u,int v) {
	if(connected(u,v)==0) {
		u=find(u);
		v=find(v);
		if(size[u]<size[v]) swap(u,v);
		parent[v]=u;
		size[u]+=size[v];
	}
}
int main() {
	int T;
	cin >> T;
	while(T--) {
		init();
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		int color[1001];
		memset(color,0,sizeof(color));
		for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		if(__gcd(a[i],a[j])>1) {
			if(parent[i]!=i and parent[j]!=j) continue;
			Union(i,j);
			
			int g=__gcd(a[i],a[j]);
			a[i]==a[i]/g;
			a[j]==a[j]/g;
		}
		int c=0;
		for(int i=0;i<n;i++) {
			if(find(i)==i) color[i]=c++;
		}
		cout<<c;
		cout<<endl;
		for(int i=0;i<n;i++) 
		cout<<color[find(i)]<<" ";
		cout<<endl;
	}
}
