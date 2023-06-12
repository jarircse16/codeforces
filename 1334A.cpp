#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int p = 0, c = 0;
		bool fl = true;
		for (int i = 0; i < int(n); i++)
        {
			int x, y;
			cin>>x>>y;
			if (x < p || y < c || y - c > x - p)
				fl = false;
			p = x, c = y;
		}
		puts(fl ? "YES" : "NO");
	}
	return 0;
}
