include<bits/stdc++.h>
using namespace std;

#define num 999377
unsigned long long fact[num];

unsigned long long bigmod(unsigned long long x,unsigned long long y,unsigned long long p)
{
   unsigned long long res=1;
   x=x%p;
   while(y>0)
   {
      if(y & 1)
         res=(res*x)%p;
      y=y>>1; //  y/=2
      x=(x*x)%p;
   }
   return res;
}
unsigned long long modinverse(unsigned long long n,unsigned long long p)
{
   return bigmod(n,p-2,p);
}
void factorial(unsigned long long n,unsigned long long p)
{
     fact[0]=1;
   for(unsigned long long i=1;i<n;i++)
      fact[i]=(fact[i-1]*i)%p;
}
unsigned long long result(unsigned long long i)
{
   unsigned long long te=pow(modinverse(fact[i],999377),2);
   te%=999377;
   return (fact[(2*i)%999377]*te)%999377;
}
unsigned long long lucascombination(unsigned long long n,unsigned long long r,unsigned long long p)
{
   if(r==0)
      return 1;
   unsigned long long ni=n%p,ri=r%p;
   if(ni<ri)
      return 0;
   return (lucascombination(n/p,r/p,p)*result(ri))%p;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(0);
   unsigned long long n;
   int t;
   factorial(num,999377);
   cin >> t;
   for(int j=1;j<=t;j++)
   {
      cin >> n;
         cout << "Case "<< j << ": " << lucascombination(2*n,n,999377) << "\n";
   }
}
