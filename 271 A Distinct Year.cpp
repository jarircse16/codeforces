#include<bits/stdc++.h>
using namespace std;

bool isdist(int X)
{
    /*int a=X%10, b=(X/10)%10,c=(X/100)%10,d=(X/1000);
    if(a==b or b==c or c==d or d==a or a==c or b==d)
        return false;
    else
        return true;*/
    set<int> s;
    while(X) s.insert(X%10),X/=10;
    if(s.size()==4) return true;
    return false;
}
int main()
{
    int Y;
    cin>>Y;
    Y++;
    while(1)
    {
        if(isdist(Y))
        {
            cout<<Y;
            break;
        }
        else
            Y++;
    }
    return 0;
}
