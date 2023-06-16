#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		string ans="";
		int c=0;
		for(int i=0;i<n;i++) if(a[i]%2==0) {
			ans=to_string(i+1);
			break;
		}
		else {
			if(c==2) break;
			else {
				c++;
				ans+=to_string(i+1)+" ";
			}
		}
		if(c==2) cout<<ans<<endl; else cout<<-1<<endl;
	}
}
