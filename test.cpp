#include <bits/stdc++.h> 
using namespace std; 
  
int Zerocount(int n) 
{ 
    int count = 0; 
    for (int i = 5; n / i >= 1; i *= 5) 
        count += (int)(n / i); 
  
    return count; 
} 
  

int main() 
{ 
    int n;
	cin>>n; 
    cout<<Zerocount(n); 
    return 0; 
} 

