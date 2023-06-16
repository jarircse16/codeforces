#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int t=1;t<=T;t++) {
		printf("Case %d:\n",t);
		int n,m;
		cin>>n>>m;
		deque<int> dq;
		while(m--) {
			string x;
			cin>>x;
			if(x=="pushRight") {
				int y;
				cin>>y;
				if(dq.size()==n) cout<<"The queue is full\n";
				else {
					cout<<"Pushed in right: "<<y<<endl;
					dq.push_back(y);
				}
			}
			else if(x=="pushLeft") {
				int y;
				cin>>y;
				if(dq.size()==n) cout<<"The queue is full\n";
				else {
					cout<<"Pushed in left: "<<y<<endl;
					dq.push_front(y);
				}
			}
			else if(x=="popLeft") {
				if(dq.size()==0) cout<<"The queue is empty\n";
				else {
					cout<<"Popped from left: "<<dq[0]<<endl;
					dq.pop_front();
				}
			}
			else if(x=="popRight") {
				if(dq.size()==0) cout<<"The queue is empty\n";
				else {
					cout<<"Popped from right: "<<dq[dq.size()-1]<<endl;
					dq.pop_back();
				}
			}
		}
	}
}
