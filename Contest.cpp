#include<bits/stdc++.h>
using namespace std;
#define int long long

int a[200005];
int b[200005];
vector<int> tree[200005*3];
int S[200005*3];

void build(int node,int L,int R) {
	if(L==R) {
		tree[node].push_back(b[L]);
		S[node]=a[L];
		return;
	}
	int m=(L+R)>>1;
	build(node*2,L,m);
	build(node*2+1,m+1,R);
	S[node]=S[node*2]+S[node*2+1];
	merge(tree[node*2].begin(),tree[node*2].end(),tree[node*2+1].begin(),tree[node*2+1].end(),back_inserter(tree[node]));
}
int query(int node,int L,int R,int l, int r) {
	if(R<l or r<L) return 0;
	if(l<=L and R<=r) return tree[node].end()-upper_bound(tree[node].begin(),tree[node].end(),r);
	int m=(L+R)>>1;
	return (query(node*2,L,m,l,r)+query(node*2+1,m+1,R,l,r));
}

int query2(int node,int L,int R,int l, int r) {
	if(R<l or r<L) return 0;
	if(l<=L and R<=r) return S[node];
	int m=(L+R)>>1;
	return query2(node*2,L,m,l,r)+query2(node*2+1,m+1,R,l,r);
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		map<int,deque<int>> M;
		for(int i=1;i<=n;i++) M[a[i]].push_back(i);
		for(auto p:M) M[p.first].push_back(1<<30),M[p.first].pop_front();
		for(int i=1;i<=n;i++) b[i]=M[a[i]][0],M[a[i]].pop_front();
		
		//for(int i=1;i<=n;i++) cout<<b[i]<<endl;
		//return 0;
		for(int i=0;i<=n*3;i++) tree[i].clear(),S[i]=0;
		
		build(1,1,n);
//		for(;;) {
//			int l,r;
//			cin>>l>>r;
//			cout<<query(1,1,n,l,r)<<endl;
//		}
		vector<pair<int,int>> ans;
		for(int i=1;i<=n;i++) {
			int d1=query(1,1,n,1,i);
			int d2=query(1,1,n,i+1,n);
			int s1=query2(1,1,n,1,i);
			int s2=query2(1,1,n,i+1,n);
			if(s1==(d1*(d1+1))/2 and s2==(d2*(d2+1))/2)
			ans.push_back({i,n-i});
		}
		cout<<ans.size()<<endl;
		if(ans.size()) for(auto p:ans) cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;	
}
