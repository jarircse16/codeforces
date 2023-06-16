#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define testcase int t;cin>>t;while(t--)solve();
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
#define int long long
#define gap ' '
#define endl '\n'
using namespace std;

bool processed[100005];

int process_string(string s) {
	int n=s.size();
	if(n==0) return 0;
	for(int i=0;i<s.size();i++) processed[i]=0;
	int total=0,i=0;
	while(i<n-1) {
		if(s[i]==s[i+1]) {
			int one=i,two=i+1,k=1;
			processed[one]=processed[two]=true;
			while(s[one-1]==s[two+1] and one-1>=0 and two+1<n and processed[one-1]==false)
			k++,one--,two++,processed[one]=processed[two]=true;
			total+=k;
			i=two+1;
		} 
		else i++;
	}
	return total;
}
void solve() {
	string s;
	cin>>s;
	int total=0;
	
	while(1) {
		int now=process_string(s);
		//cout<<now<<endl;
		if(now==0) break;
		total+=now;
		string New="";
		for(int i=0;i<s.size();i++)
		if(processed[i]==false) New+=s[i];
		s=New;
		//cout<<New<<endl;
	}
	if(total%2==1) cout<<"Yes"; else cout<<"No";
}

int32_t main() {
	fio
	//testcase
	solve();
	return 0;
}
