#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int A[n][m],B[n][m]; //init
	
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>A[i][j]; //input A
	
	
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>B[i][j]; //input B
	
	multiset<int> MS1[m+n-1],MS2[m+n-1]; // m*n matrix has 2*(m+n-1) diagonals total , so m+n-1 in one side
	int c=0;
	for(int s=0;s<n;s++) {
		int x=s,y=0;
		while(x>=0 and y>=0 and x<n and y<m) {
			MS1[c].insert(A[x][y]);
			//cout<<x<<","<<y<<" "<<endl;
			x--,y++;
		}
		//cout<<endl;
		c++;
	}
	for(int s=1;s<m;s++) {
		int x=n-1,y=s;
		while(x>=0 and y>=0 and x<n and y<m) {
			MS1[c].insert(A[x][y]);
			//cout<<x<<","<<y<<" "<<endl;
			x--,y++;
		}
		c++;
		//cout<<endl;
	}
	c=0;
	for(int s=0;s<n;s++) {
		int x=s,y=0;
		while(x>=0 and y>=0 and x<n and y<m) {
			MS2[c].insert(B[x][y]);
			x--,y++;
		}
		c++;
	}
	for(int s=1;s<m;s++) {
		int x=n-1,y=s;
		while(x>=0 and y>=0 and x<n and y<m) {
			MS2[c].insert(B[x][y]);
			x--,y++;
		}
		c++;
	}
	for(int i=0;i<m+n-1;i++) if(MS1[i]!=MS2[i]) { cout<<"NO\n"; return 0; }
	cout<<"YES\n";
}
