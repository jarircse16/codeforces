#include<bits/stdc++.h>
using namespace std;

vector<int>x;

void pf(int n)
{
    while (n % 2 == 0) {
        x.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            x.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        x.push_back(n);
    }

}
int main()
{
    int n;
    cin>>n;
    cout<<n<<": ";
    pf(n);
    cout<<" "<<x[0];
    for(int i=1;i<x.size();i++)
        cout<<" "<<x[i];
    return 0;
}
