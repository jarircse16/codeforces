#include<bits/stdc++.h>
using namespace std;
const int maxn = 100000;

struct query{
  int l, r, id;
} q[maxn];
int a[maxn];

const int k = 320; 

bool cmp(query &a, query &b) {
  int block_a = a.l / k, block_b = b.l / k;
  if(block_a == block_b) return a.r < b.r;
  return block_a < block_b;
}

int l = 0, r = -1, sum = 0, ans[maxn];
map<int,int> cnt;

void add(int x) {
	cnt[a[x]]++;
	cout<<a[x]<<" = "<<cnt[a[x]]<<endl;
	if(cnt[a[x]]==a[x]) sum++;
	else if(cnt[a[x]]>a[x]) sum--;
}
void remove(int x) {
	cnt[a[x]]--;
	cnt[a[x]]=max(cnt[a[x]],0);
	cout<<a[x]<<" = "<<cnt[a[x]]<<endl;
	if(cnt[a[x]]==a[x]) sum++;
	else if(cnt[a[x]]<a[x]) sum--;
}

int main() {
  int N,Q;
  cin>>N>>Q;
  for(int i=0;i<N;i++) cin>>a[i];
  for(int i = 0; i < Q; i++) {
    cin >> q[i].l >> q[i].r;
    q[i].l--,q[i].r--;
    q[i].id = i;
  }
  sort(q, q+Q, cmp);
  for(int i = 0; i < Q; i++) {
    while(l > q[i].l) add(--l);
    while(r < q[i].r) add(++r);
    while(l < q[i].l) remove(l++);
    while(r > q[i].r) remove(r--);
    ans[q[i].id] = sum;
    //cout<<sum<<endl;
  }
  for(int i=0;i<Q;i++)
  cout<<ans[i]<<endl;
}
