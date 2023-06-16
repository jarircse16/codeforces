#include <bits/stdc++.h>
using namespace std;

int del_1st(int n)
{

    return (int)n/10;
}

int del_2nd(int n)
{
    int fdgt= n%10;
    int numwithout2nddgt=n/100;
    return (numwithout2nddgt*10+fdgt);
}

int maximum(int m, int n)
{
    if(m>n)
        return m;
    else
        return n;
}
int main() {

    int n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        cout<<maximum(del_1st(n),del_2nd(n))<<endl;
    }
	return 0;
}

