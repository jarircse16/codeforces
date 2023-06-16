#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int maxi=m ,mini=n;
	if(n>m)
    {
        maxi=n;
        mini=m;
    }

	if (mini % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	return 0;
}
