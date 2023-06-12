#include<bits/stdc++.h>
using namespace std;
#define int long long

int issq(int x)
{
    if(x<0)
        return 0;
    else
    {
    double t=sqrt(x);

    if(floor(t)==ceil(t))
        return 1;
    else
        return 0;
    }
}

int factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}

int power(int x,int p)
{
    if(p==0)
        return 1;
    int powe=power(x,p/2);
    if(p%2==1)
        return x*powe*powe;
    else
        return powe*powe;
}

int32_t main()
{
    for(int n=0;n<19;n++)
    {
    for(int x=0;x<37;x++)
        {
            int z=factorial(n)-power(3,x);
            if(issq(z))
            {
                cout<<"n= "<<n<<" "<<"x= "<<x<<endl;
            }
        }
    }


    return 0;
}
