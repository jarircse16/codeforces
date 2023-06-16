#include<bits/stdc++.h>
using namespace std;
#define int long long
int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int p[n+1];
	p[0]=0;
	for(int i=1;i<=n;i++) p[i]=p[i-1]+a[i];
	int start = 0,end=0;
	set<int> s;
	int ans=0;
	s.insert(0);
	while(start<n) {
		while(end < n and !s.count(p[end+1])) {
			end++;
			s.insert(p[end]);			
		}
		ans+=end-start;
		s.erase(p[start]);
		start++;
	}
	cout<<ans;
}
