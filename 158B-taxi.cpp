#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, member_count[5]= {0};
    cin>>n;
    while (n--)
    {
        cin>>s;
        member_count[s] += 1;
    }
    int total_taxis = member_count[4] + member_count[3] + member_count[2] / 2;
    member_count[1] -= member_count[3];
    if (member_count[2] % 2 == 1)
    {
        total_taxis += 1;
        member_count[1] -= 2;
    }
    if (member_count[1] > 0)
    {
        total_taxis += (member_count[1] + 3) / 4;
    }
    cout<<total_taxis;
    return 0;
}
